#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int cla(vector<int> vec)
{
    int lar = INT_MIN;
    int seclar = INT_MIN;
    for(int i:vec)
    {
        if(i>lar)
        {
            lar = i;
        }
    }
    for(int i:vec)
    {
        if(i>seclar&&i!=lar)
        {
            seclar = i;
        }
    }
    return seclar;
}
int main()
{
    cout<<cla({35,4,64,6,5,75,45,34,2,4,35,6,54,6});
    return 0;
}