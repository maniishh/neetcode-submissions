class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> ans;
        for (int i = 0; i < speed.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            ans.push_back({position[i], time});
        }
        sort(ans.begin(), ans.end(), [](auto& a, auto& b) { return a.first > b.first; });
        int cnt = 0;
        double mxt = 0;
        for (auto& it : ans) {
            double t = it.second;
            if (t > mxt) {
                cnt++;
                mxt = t;
            }
        }
        return cnt;
    }
};
