#include<iostream>
#include<vector>
using namespace std;
bool fuct(vector<int> vec)
{
    int tar;
    cout<<"enter  target : ";
    cin>>tar;
    for(int i:vec)
    {
        if(tar==i)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int aa  =fuct({1,324,657,234,56,576,352,3,645,6});
    cout<<aa<<" ";
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;
// bool fuct(vector<int> vec)
// {
//     int tar;
//     cout<<"enter  target : ";
//     cin>>tar;
//     for(int i:vec)
//     {
//         if(tar==i)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     vector<int> vec = {1,324,657,234,56,576,352,3,645,6};
//     int aa  =fuct(vec);
//     cout<<aa<<" ";
//     return 0;
// }