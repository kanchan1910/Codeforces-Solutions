#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--){
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i = 0;i < k; i++){
      arr[i] = i + 1;
  }
  int x = k - 1;
  for(int i = k; i < n; i++){
      arr[i] = x;
      x--;
  }
  vector<int>ans;
  unordered_set<int>s;
  for(int i = n - 1 ; i >= 0 ; i--){
      if( s. find(arr[i]) == s.end()){
         ans.push_back(arr[i]); 
         s.insert(arr[i]);
      }
  }
  reverse(ans.begin(),ans.end());
  for(int i = 0; i < ans.size() ; i++){
      cout << ans[i] << " ";
  }
  cout << endl;
}
}
