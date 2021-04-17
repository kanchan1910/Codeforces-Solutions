#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
  int n ;
  cin >> n;
  int arr[n];
  for(int i = 0 ; i < n; i++)
  {
      cin>>arr[i];
  }
  unordered_map<int,int>m;
  for(int i = 0 ;i < n ; i++)
  {
      m[arr[i]]++;
  }
  int ans = 0;
  for(auto x:m)
  {
      ans = max(ans , x.second);
  }
  cout << ans <<endl;
}

}
// tc o(n)
// sc O(1)
