class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> mp;

public:
    TimeMap() {
    }

    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {

        if (mp.find(key) == mp.end())
            return "";

        auto &v = mp[key];

        int low = 0;
        int high = v.size() - 1;

        string ans = "";

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (v[mid].first <= timestamp) {

                // This timestamp is valid
                ans = v[mid].second;

                // Maybe there is a later valid timestamp
                low = mid + 1;
            }
            else {

                // Timestamp is too large
                high = mid - 1;
            }
        }

        return ans;
    }
};