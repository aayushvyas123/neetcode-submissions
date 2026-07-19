class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> leftMultiple(nums.size());
        vector<int> rightMultiple(nums.size());
        vector<int> ans(nums.size());

        leftMultiple[0] = 1;
        rightMultiple[nums.size()-1] = 1;
        for(int i = 1; i < nums.size(); i++){
            leftMultiple[i] = leftMultiple[i-1] * nums[i - 1];
            // leftMultiple[i].first = leftMultiple[i-1].second * nums[i - 1];
        } 

        for(int i = nums.size()-2; i >=0;i--){
            rightMultiple[i] = rightMultiple[i+1] * nums[i + 1];
            // rightMultiple[i].first = rightMultiple[i+1].second * nums[i + 1];
        }

        for(int i = 0; i < nums.size(); i++){
            ans[i] = leftMultiple[i] * rightMultiple[i];
        }

        return ans;
        
    }
};
