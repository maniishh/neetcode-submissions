class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int mx = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            while (mp[s[i]] > 1) {
                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }

            mx = max(mx, i - l + 1);
        }
        return mx;
    }
};
