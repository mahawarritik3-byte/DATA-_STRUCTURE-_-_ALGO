#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,34,45,35,53,3,54,342,345,33,2};
    int val = INT_MIN;
    int idx1;
    int idx2;
    int a=1;
    for(int i:vec)
    {
        cout<<"Day "<<a<<" : "<<i<<" "<<endl;
        a++;
    }
    cout<<endl<<"profit calculation here : "<<endl;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            int sys = vec[j]-vec[i];
            if(sys>val)
            {
                val = sys;
                idx1 = i;
                idx2 = j;
            }
        }
    }
    cout<<"max profit which can bee possible : ";
    cout<<val<<endl;
    cout<<"If you purchase on day "<<(idx1+1)<<" and sell it on day "<<(idx2+1)<<" ";
    return 0;
}