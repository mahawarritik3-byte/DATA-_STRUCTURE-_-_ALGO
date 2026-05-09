class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        vector<int>ans;
        long long summ =0;
        for(int i=0;i<nums.size();i++)
        {
            int minn = nums[i];
            int maxx = nums[i];
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]<=minn)
                {
                    minn = nums[j];
                }
                else if(nums[j]>=maxx)
                {
                    maxx = nums[j];
                }
                summ+=maxx - minn;
            }
        }
        return summ;
    }
};