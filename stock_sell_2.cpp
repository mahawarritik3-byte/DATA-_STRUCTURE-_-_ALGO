#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int profit=0;
    vector<int> vec={1,345,54,3,77,2,54,34,23,67,74,765,34,27,43};
    int buy = vec[0];
    for(int i=1;i<vec.size();i++)
    {
        if(vec[i]>buy)
        {
            profit = max(profit,(vec[i]-buy));
        }
        buy = min(buy,vec[i]);
    }
    cout<<profit;
    return 0;
}