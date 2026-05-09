#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int w = 0;
    int cap = 0;
    int max_cap = 0;

    vector<int> vec = {4, 2, 7, 8, 3, 9};

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            w = j - i;

            if (vec[i] < vec[j])
            {
                cap = w * vec[i];
            }
            else
            {
                cap = w * vec[j];
            }

            max_cap = max(max_cap, cap);
        }
    }

    cout << "max possible capacity will be : " << max_cap;

    return 0;
}