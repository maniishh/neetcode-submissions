class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int mx=0;
        while(l<r){
            int w=r-l;
            int h=min(heights[l],heights[r]);
            mx=max(mx,w*h);
            if(heights[r]<heights[l]){
                r--;
            }
            else{
                l++;
            }
        }
    return mx;
    }
};
