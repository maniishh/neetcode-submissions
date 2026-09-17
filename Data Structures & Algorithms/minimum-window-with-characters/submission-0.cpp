class Solution {
   public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (char ch : t) {
            mp[ch]++;
        }
        int l = 0, mini = INT_MAX, cnt = 0;
        int si = 0;
        for (int r = 0; r < n; r++) {
            mp[s[r]]--;
            if (mp[s[r]] >= 0) {
                cnt++;
            }
            while (cnt == t.size()) {
                if (r - l + 1 < mini) {
                    mini = r - l + 1;
                    si = l;
                }
                mp[s[l]]++;
                if (mp[s[l]] > 0) {
                    cnt--;
                }
                l++;
            }
        }
        return mini == INT_MAX ? "" : s.substr(si, mini);
    }
};
