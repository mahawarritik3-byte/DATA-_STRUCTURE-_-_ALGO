#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1,32,44,54,3,5,46,4,56,67,6,53,5,6,54,56,7};
    vector<int> temp;

    int k = 3;
    int n = vec.size();

    // FIX 1: use push_back
    for(int i = k; i < n; i++)
    {
        temp.push_back(vec[i]);
    }

    // second part
    for(int i = 0; i < k; i++)
    {
        temp.push_back(vec[i]);
    }

    // FIX 2: copy full array
    for(int i = 0; i < n; i++)
    {
        vec[i] = temp[i];
    }

    // print
    for(int i : vec)
    {
        cout << i << " ";
    }

    return 0;
}