#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int hello()
{
    vector<int> vec = {35,4,64,6,5,75,45,34,2,4,35,6,54,6};
    sort(vec.begin(),vec.end());
    int size = vec.size()-1;
    int last = vec[size];
    for(int i=size-1;i>=0;i--)
    {
        if(vec[i]!=last)
        {
            return vec[i];
        }
    }
    return -1;
}
int main()
{
    cout<<hello()<<" ";
    return 0;
}