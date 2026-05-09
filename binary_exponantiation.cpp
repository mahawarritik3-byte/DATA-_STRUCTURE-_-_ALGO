#include<iostream>
using namespace std;
int main()
{
    double a;
    int b;
    double res = 1;
    cout<<"enter base : ";
    cin>>a;
    cout<<"enter top : ";
    cin>>b;
    if(b<0)
    {
        a = 1 / a;
        b = -b;
    }
    while(b>0)
    {
        if(b%2==1)
        {
            res = res * a;
        }
        a = a * a;
        b = b / 2;
    }
    cout<<res;
    return 0;
} 