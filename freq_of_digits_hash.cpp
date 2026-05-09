#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1 = {6,2,4,2,3,3,4,5,4,2,6,5,7,4,5,7,6,5,3,2,4,2,3,5,9};
    int maxEle = *max_element(vec1.begin(), vec1.end());
    vector<int> vec(maxEle+1,0);
    for(int i=0;i<vec1.size();i++)
    {
        vec[vec1[i]]++;
    }
    int x = 0;
    for(int s:vec)
    {
        cout<<"freq of "<<x<<" is "<<s<<" "<<endl;
        x++;
    }
    return 0;
}