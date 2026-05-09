#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    vector<int> vec = {0,1,0,2,1,0,1,3,2,1,2,1};
    int sum = 0;
    int aa=0;
    int maxxl = INT_MIN;
    int maxxr = INT_MIN;
    for(int i=0;i<vec.size();i++)
    {
        maxxl = INT_MIN;
        maxxr = INT_MIN;
        for(int j=0;j<=i;j++)
        {
            if(vec[j]>maxxl)
            {
                maxxl = vec[j];
            }
        }
        for(int k=i;k<vec.size();k++)
        {
            if(vec[k]>maxxr)
            {
                maxxr= vec[k];
            }
        }
        if(maxxl>maxxr)
        {
            aa = maxxr;
        }else{
            aa = maxxl;
        }
        sum+=aa - vec[i];
    }
    cout<<sum;
    return 0;
}