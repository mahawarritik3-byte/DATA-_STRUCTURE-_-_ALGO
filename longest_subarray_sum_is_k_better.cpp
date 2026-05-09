#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int hello(vector<int> vec,int tar)
{
    int len = INT_MIN;
    int sum=0;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i;j<vec.size();j++)
        {
            sum+=vec[j];
            if(sum==tar)
            {
                int s = j-i+1;
                len = max(len,s);
            }
        }
        sum = 0;
    }
    return len;
}
int main()
{
    cout<<hello({5,33,63,2,2,1,2,2,56,7,7,9,7,5,4,4},7);
    return 0;
}