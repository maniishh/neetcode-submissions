class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int p = matrix[0].size();
        int l = 0, h = p * n - 1;
        while (l <= h) {
            int m = l + (h - l) / 2;
            int row = m / p;
            int col = m % p;
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                l = m + 1;
            else
                h = m - 1;
        }
        return false;
    }
};
