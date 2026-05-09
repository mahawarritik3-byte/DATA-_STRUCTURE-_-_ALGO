#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int> vec = {4, 5, 6, 6, 6, 6, 6};
int freq = 1;
    int ans = vec[0];
    sort(vec.begin(),vec.end());
    bool found = false;
    for(int i=1;i<vec.size();i++)
    {
        if(vec[i-1]==vec[i])
        {
            freq++;
        }
        else{
            freq=1;
        }
        if(freq>vec.size()/2)
        {
            cout<<"yess! we found !! ";
            cout<<vec[i];
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"no mejority";
    }
    return 0;
}