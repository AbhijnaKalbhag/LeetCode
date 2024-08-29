class Solution {
public:
    int trap(vector<int>& height) {
        
        int l=0,r=height.size()-1,water=0;
        int maxL=height[0],maxR=height[height.size()-1];
        while(l<r){
            if(maxL<=maxR){
                l++;
                maxL=max(maxL,height[l]);
                water+=maxL-height[l];
            }
            else{
                 r--;
                maxR=max(maxR,height[r]);
                water+=maxR-height[r];
            }
        }
        return water;
    }
};