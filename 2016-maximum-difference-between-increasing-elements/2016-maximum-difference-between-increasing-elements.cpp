class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff=-1;
        int minNum=nums[0];

        for(int i=1;i<nums.size();i++){

            if(minNum<nums[i]){
                maxDiff=max(maxDiff,nums[i]-minNum);

            }else{
                minNum=nums[i];
            }

        }
        return maxDiff;

        
    }
};