class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(const string& word : strs){
            string key = word;
            sort(key.begin(), key.end());
            mp[key].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
