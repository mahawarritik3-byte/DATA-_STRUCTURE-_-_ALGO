#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int mul = 1;
    vector<int> vec = {3,7,2,9,4,6};
    vector<int> vec1;
    cout<<"original array : ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec.size();j++)
        {
            if(i!=j)
            mul = mul * vec[j];
        }
        vec1.push_back(mul);
        mul = 1;
    }
    cout<<endl<<"answer array : ";
    for(int j:vec1)
    {
        cout<<j<<" ";
    }
    return 0;
}