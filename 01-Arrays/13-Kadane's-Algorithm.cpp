class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadanes's algorithm
        int sum=0, mx=nums[0];
        for(auto it:nums)
        {
            sum+=it;
            mx=max(max, sum);
            if(sum==0)
                sum=0;
        }
    }
};