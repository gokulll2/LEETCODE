class Solution {
public:
    int kadane(vector<int>&nums)
    {
//         if(nums.size()==0)
//         {
// return nums[0];}
        int curr_sum=0;
        int MAX_SUM=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum=curr_sum+nums[i];
            if(curr_sum>MAX_SUM)
            {
                MAX_SUM=max(curr_sum,MAX_SUM);
}
            if(curr_sum<0)
            {
curr_sum=0;}
        }
        return MAX_SUM;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsubarrsum=kadane(nums);
        int countpos=0;
        int totalsumrev=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=-1*nums[i];
            if(nums[i]>0)
            {
                countpos++;
}
            totalsumrev+=nums[i];
}
        if(countpos==nums.size())
        {
            return maxsubarrsum;
}
        int maxsubarr_rev=kadane(nums);
        int reverse_sum=-1*(totalsumrev-maxsubarr_rev);
        return max(maxsubarrsum,reverse_sum);
    }
};