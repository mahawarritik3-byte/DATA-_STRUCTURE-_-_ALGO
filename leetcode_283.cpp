class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i:nums)
        {
            if(i!=0)
            {
                nums[j]=i;
                j++;
            }
        }
        for(int i=j;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};


//in this question we used a variable "j" which we initialized with 0 and than stored every element of nums which is non zero at "j" in an array 
//and incremented it 
// in another loop we started the "i" with "j" and runned the loop till the i<nums.size() because the remaining elements will be  definatly 0 in the array.