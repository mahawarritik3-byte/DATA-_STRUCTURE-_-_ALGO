#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   vector<int> vec = {5,33,63,2,2,3,2,56,7,7,9,7,5,4,4};
   int target  = 7;
   int len = INT_MIN;
   int sum = 0;
   for(int i=0;i<vec.size();i++)
   {
       for(int j=i;j<vec.size();j++)
       {
           sum = 0;
           for(int k=i;k<=j;k++)
           {
               sum = sum + vec[k];
           }
           if(sum==target)
               {
                   int lgt = (j-i)+1;
                   len = max(len,lgt);
               }
       }
   }
   cout<<"longest length of subarray whos sum is equal to k"<<len;
   return 0;
}