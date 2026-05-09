#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec = {23,5,2,54,3,4,3,43,2};
    int lar  =INT_MAX;
    int sec = INT_MAX;
    for(int i:vec)
    {
        if(i<lar)
        {
            sec = lar;
            lar = i;
        }
        else if(i<sec&&i!=lar)
        {
                sec = i;
        }
    }
    cout<<lar<<" ";
    cout<<sec<<" ";
    return 0;
}