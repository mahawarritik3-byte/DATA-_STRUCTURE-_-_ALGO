#include<iostream>
using namespace std;
bool isprime(int a)
{
    if(a <=1)// 1 setisfys all prime no condition but not considered in prime no and also 0 and negative no. 
    {
        return false;
    }
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout<<isprime(1);
    return 0;
}