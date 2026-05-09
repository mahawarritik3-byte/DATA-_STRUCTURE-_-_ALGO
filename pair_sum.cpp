#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int tar;
    bool c = false;
    vector<int> vec = {-1,-2,-3,-4,-5,-6};
    cout<<"enter the target here : ";
    cin>>tar;
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"vector"<<endl;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            if((vec[i]+vec[j])==tar)
            {
                cout<<"we found it"<<endl<<"indexes are : "<<i+1<<" and "<<j+1<<endl;
                c = true;
                break;
            }
        }
        if(c)
        {
            break;
        }
    }
    if(!c)
    {
        cout<<"not found any such pair"<<endl;
    }
    return 0;
}