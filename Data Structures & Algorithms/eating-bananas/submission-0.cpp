class Solution {
   public:
    int f(vector<int>& piles, int x) {
        int h = 0;
        for (int i = 0; i < piles.size(); i++) {
            h += (piles[i] + x - 1) / x;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (f(piles, mid) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
