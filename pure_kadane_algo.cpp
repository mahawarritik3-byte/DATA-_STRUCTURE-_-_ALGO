#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int sum = 0;
    int maxsum = INT_MIN;
    vector<int> vec= {-1,-2,-3,-4,-5};
    for(int i=0;i<vec.size();i++)
    {
        sum = sum + vec[i];
        maxsum = max(sum , maxsum);
        if(sum<0)
        {
            sum = 0;
        }
    }
    cout<<"max possible sub array will be : "<<maxsum<<" ";
    return 0;
}