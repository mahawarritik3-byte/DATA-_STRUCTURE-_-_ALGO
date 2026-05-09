#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,24,232,3,4,2,65,4,56,44};
    cout<<"before making any change to the array : ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> temp;
    int size = vec.size();
    int pos;
    cout<<"enter position to replace : ";
    cin>>pos;
    pos = pos % vec.size();
    for(int i=0;i<pos;i++)
    {
        temp.push_back(vec[i]);
    }
    for(int i=pos;i<vec.size();i++)
    {
        vec[i-pos]=vec[i];
    }
    int j=0;
    for(int i=(size-pos);i<vec.size();i++)
    {
        vec[i]=temp[j];
        j++;
    }
    for(int i:vec)
    {
        cout<<i<<" ";
    }
}