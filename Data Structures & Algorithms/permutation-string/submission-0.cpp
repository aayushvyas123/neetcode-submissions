class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> need;

        for(char c : s1){
            need[c]++;
        }

        int left = 0;
        int right = 0;
        int windowSize = s1.length();

        unordered_map<char, int> window;
        for(right = 0; right < s2.length(); right++){
            window[s2[right]]++;
            if(right - left + 1 > s1.length()){
                window[s2[left]]--;
               if(window[s2[left]] == 0){
                    window.erase(s2[left]);
                }
                left++;
            }



            if(window == need){
                return true;
            }
        }
        return false;
    }
};
