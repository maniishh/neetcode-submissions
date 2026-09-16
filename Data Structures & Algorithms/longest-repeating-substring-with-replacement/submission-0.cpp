class Solution {
   public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int mxf = 0;
        int mx = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mxf = max(mxf, mp[s[i]]);
            while ((i - l + 1) - mxf > k) {
                mp[s[l]]--;
                l++;
            }
            mx = max(mx, i - l + 1);
        }
        return mx;
    }
};
