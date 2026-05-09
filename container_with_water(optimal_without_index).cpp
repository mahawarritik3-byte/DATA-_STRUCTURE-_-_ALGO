#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {3,2,7,9,2,5};
    int f = 0;
    int r = (vec.size()-1);
    int w,minn,cap;
    int maxx = INT_MIN;
    while(f<r)
    {
         w = r-f;
         minn = min(vec[f],vec[r]);
         cap = minn*w;
         maxx = max(maxx,cap);
         if(vec[f]<vec[r])
         {
             f++;
         }
         else{
             r--;
         }
    }
    cout<<"max possible capacity will be : "<<maxx;
    return 0;
}