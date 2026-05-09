#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {3,2,7,9,2,5};
    int f = 0;
    int idx1,idx2;
    int r = (vec.size()-1);
    int w,minn,cap;
    int maxx = INT_MIN;
    while(f<r)
    {
         w = r-f;
         minn = min(vec[f],vec[r]);
         cap = minn*w;
         if(cap>maxx)
         {
             maxx = cap;
             idx1 = f+1;
             idx2 = r+1;
         }
         if(vec[f]<vec[r])
         {
             f++;
         }
         else{
             r--;
         }
    }
    cout<<"max possible capacity will be : "<<maxx;
    cout<<endl<<"indexes are : "<<idx1<<" and "<<idx2;
    return 0;
}