#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int tar;
    bool c = false;
    vector<int> vec = {1,2,3,4,5,6};
    int j = vec.size()-1;
    int i = 0;
    cout<<"enter the target here : ";
    cin>>tar;
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    while(i<j)
    {
        if(vec[i]+vec[j]<tar)
        {
            i++;
        }
        else if(vec[i]+vec[j]>tar)
        {
            j--;
        }
        else
        {
          cout<<"we found the target at indices : "<<i<<" and "<<j<<endl;
            c = true;
            break;
        }
    }
    if(!c)
    {
        cout<<"not found ! ";
    }
    return 0;
}