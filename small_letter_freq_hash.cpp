#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    vector<char> vec1={'a','e','r','q','q','a','s','e','r'};
    vector<int> vec(26,0);
    for(int i=0;i<vec1.size();i++)
    {
        vec[vec1[i]-'a']++;
    }
    int k=0;
    for(int j:vec)
    {
        cout<<"freq of "<<char(k+97)<<" is "<<j<<endl;
        k++;
    }
    return 0;
}