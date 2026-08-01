class Solution {
public:
// abcabcbb = 
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_set<char> window;
        int maxLenght = 0;
        for(right = 0; right < s.length(); right++){
            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            maxLenght = max(maxLenght, right - left + 1);

        }
        return maxLenght;
    }
};
