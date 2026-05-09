#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1 = {6,2,4,2,3,3,4,5,4,2,6,5,7,4,5,1,7,6,5,3,2,4,2,3,5,9};
    int s = *max_element(vec1.begin(),vec1.end());
    int cc = 0;
    vector<int> hash(s+1,0);
    for(int i=0;i<vec1.size();i++)
    {
        hash[vec1[i]]++;
    }
    for(int j=0;j<hash.size();j++)
    {
        if(hash[j]==1)
        {
            cc++;
        }
    }
    cout<<cc; 
    // for(int i:hash)
    // {
    //     if(i>1)
    //     {
    //         cout<<vec1[hash[]]
    //     }
    // }
    return 0;
}