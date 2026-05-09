#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    int val;
    int sum = 0;
    int sum1=0;
    vector<int> vec;
    cout<<"enter count of values of vector : ";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cout<<"enter value of vector : ";
        cin>>val;
        vec.push_back(val);
    }
    cout<<endl<<"vector values are "<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"total possible subarray :";
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i;j<vec.size();j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<vec[k];
                sum = sum + vec[k];
            }
            if(sum>sum1)
            {
                sum1=sum;
            }
            sum = 0;
            cout<<endl;
        }
    }
    
    cout<<endl<<"maximum sub-array sum is : ";
    cout<<sum1<<" ";
    return 0;
}