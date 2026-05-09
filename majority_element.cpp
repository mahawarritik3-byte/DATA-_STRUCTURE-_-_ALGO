#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec={2,2,2,1,1,1};
    int c=0;
    bool found = false;
    int s = vec.size()/2;
    for(int i:vec)
    {
        c=0;
        for(int j:vec)
        {
            if(i==j)
            {
                c++;
            }
        }
            if(c>s)
            {
                cout<<"we found it here ! "<<i<<" ";
                found  = true;
                break;
            }
    }
    if(!found)
    {
        cout<<"not found ! ";
    }
    return 0;
}