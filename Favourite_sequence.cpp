#include<bits/stdc++.h>
using namespace std;
#define pb push_back
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
       int l=0;
       int r=n-1;
       vector<int>ans;
       while(l<r){
           ans.pb(arr[l]);
           l++;
           ans.pb(arr[r]);
           r--;
       }
       if(n%2!=0){
           ans.pb(arr[l]);
       }
       for(int i=0;i<n;i++){
           cout<<ans[i]<<" ";
       }
       cout<<endl;
    }
}
