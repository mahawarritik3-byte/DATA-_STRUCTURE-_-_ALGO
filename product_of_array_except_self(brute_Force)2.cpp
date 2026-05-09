#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> pro()
{
    int prod = 1;
    vector<int> vec = {1,3,5,3,9,2,1,7};
    vector<int> vec2;
    for(int i=0;i<vec.size();i++)
    {
        prod = 1;
        for(int j=0;j<vec.size();j++)
        {
            if(i!=j)
            {
                prod *=vec[j];
            }
        }
        vec2.push_back(prod);
    }
    return vec2;
}
int main()
{
    vector<int> input = pro();
    // for(int i:pro())
    // {  cout<<i<<" ";
    // }
    for(int i:input)
    {
        cout<<i<<" ";
    }
    return 0;
}