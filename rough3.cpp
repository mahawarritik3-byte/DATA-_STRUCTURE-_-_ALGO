#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,1,3,3,4,5,5,7,7};
    int c= 0 ;
    for(int i=0;i<vec.size()-1;i+=2)
    {
        if(vec[i]!=vec[i+1])
        {
            cout<<vec[i];
            break;
        }
    }
    return 0;
}