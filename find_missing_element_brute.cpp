#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5,6,8,9};
    int s = 0;
    for(int i=1;i<vec.size();i++)
    {
        s = 0;
        for(int j=0;j<vec.size();j++)
        {
            if(vec[j]==i)
            {
                s++;
                break;
            }
        }
        if(s==0)
        {
            cout<<i;
        }
    }
    return 0;
}