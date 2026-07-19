class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int low = 0;
        int high = heights.size() - 1;

        while (low != high){
            int curarea = (high - low ) * min(heights[low], heights[high]);
            if (curarea > area){
                area = curarea;
            }
            if(heights[low] < heights[high]){
                low++;

            }
            else{
                high--;
            }
        }
        return area;
        
    }
};
