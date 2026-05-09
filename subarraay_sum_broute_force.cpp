#include<iostream>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std;
int main()
{
    int sum = 0;
    int maxsum = INT_MIN;
    vector<int> vec= {1,2,3,4,5};
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i;j<vec.size();j++)
        {
            sum = sum + vec[j];
            maxsum = max(sum,maxsum);
        }
        sum = 0;
    }
    cout<<"max sum is : "<<maxsum<<" ";
    return 0;
}