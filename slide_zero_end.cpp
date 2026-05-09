#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec = {0,10,34,0,4,0,63,5,0,89,768,9,0,7,0,67,57,45,5,0,8};
    int j=-1;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    {
        return 0;
    }
    for(int i=j+1;i<vec.size();i++)
    {
        if(vec[i]!=0){
        swap(vec[i],vec[j]);
        j++;
        }
    }
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    return 0;
}
//   NEW APPROACH
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j=0;
//         for(int i:nums)
//         {
//             if(i!=0)
//             {
//                 nums[j]=i;
//                 j++;
//             }
//         }
//         for(int i=j;i<nums.size();i++)
//         {
//             nums[i]=0;
//         }
//     }
// };