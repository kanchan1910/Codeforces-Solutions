#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  unordered_map<int,int>m;
  for(int i=0;i<n;i++){
      m[arr[i]]++;
  }
  int ans=1;
  for(auto x:m){
      ans=max(ans,x.second);
  }
  cout<<ans<<endl;
}
