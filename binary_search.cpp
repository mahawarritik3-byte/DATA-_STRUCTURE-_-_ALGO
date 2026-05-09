#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int hello(int tar)
{
    vector<int> vec =  {1,3,5,6,23,56,65,76,87,98};
    int s = 0;
    int e  = vec.size()-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        mid = s + (e-s)/2; // we can't use s+e/2 because in worst condition s,e can be INT_MAX and mid is int types which can't store two INT_MAX so we use this optimised way.
        if(tar<vec[mid])
        {
            e = mid-1;
        }
        else if(tar>vec[mid])
        {
            s = mid + 1;
        }
        else{
            cout<<"found ! ";
            return vec[mid];  //we can return index also like : mid+1
        }
    }
    return -1;
}
int main()
{
    int tar;
    cout<<"enter target : ";
    cin>>tar;
    cout<<hello(tar);
    return 0;
}
