class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r= height.size()-1;
        int maxW=0;

        while(l<r){
            int w = r-l;
            int area = min(height[l],height[r])*w;
            maxW = max(maxW,area);

            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxW;
    }
};
