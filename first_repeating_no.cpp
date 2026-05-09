#include<iostream>
#include<vector>
using namespace std;
int check(vector<int> vec)
{
    int c=0;
    for(int i:vec)
    {
        for(int j:vec)
        {
            if(i==j)
            {
                c++;
            }
            if(c>1)
            {
                return i;
            }
        }
        c=0;
    }
    return -1;
}
int main()
{
    cout<<check({5, 6, 7, 7, 5});
    return 0;
}