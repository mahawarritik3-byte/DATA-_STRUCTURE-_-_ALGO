#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int hello(int tar)
{
    vector<int> vec =  {1,3,5,6,23,56,65,76,87};
    int s = 0;
    int e  = vec.size()-1;
    int mid = (s+e)/2;
    int c=0;
    while(s<=e)
    {
        c++;
        mid = (s+e)/2;
        if(tar<vec[mid])
        {
            e = mid-1;
        }
        else if(tar>vec[mid])
        {
            s = mid + 1;
        }
        else{
            cout<<"found ! "<<vec[mid]<<" in this iterations : ";
            return c;
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