class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int ans=0;
        int lp=0;
        int rp=n-1;

        while(lp<rp){

            int heights= min(height[rp],height[lp]);
            int width=rp-lp;
            int waterContainer=heights*width;
            ans=max(ans,waterContainer);

            if(height[lp]<height[rp]){

                lp++;
            }else{
                rp--;
            }
        }
        return ans;
        
    }
};