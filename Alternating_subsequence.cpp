#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int sign(int n){
    if(n>0){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  lli sum=0;
  for(int i=0;i<n;){
      int cur=arr[i];
      int j=i+1;
      while(j<n&&sign(arr[i])==sign(arr[j])){
          cur=max(cur,arr[j]);
          j++;
      }
      sum+=cur;
      i=j;
  }
  cout<<sum<<endl;
}
}
