#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int sum = 0;
  int s = 0;
  vector<int> vec = {1,2,3,5};
  int l = vec.back();
  sum = l*(l+1)/2;
  for(int i:vec)
  {
      s+=i;
  }
  cout<<sum-s;
    return 0;
}