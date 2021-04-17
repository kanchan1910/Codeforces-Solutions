#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n],b[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<n;i++){
          cin>>b[i];
      }
      vector<pair<int,int>>temp;
      for(int i=0;i<n;i++){
          temp.pb({a[i],b[i]});
      }
      sort(temp.begin(),temp.end());
      int sum=0;
      int ans=0;
      for(int i=n-1;i>=0;i--){
          sum+=temp[i].second;
          if(sum<temp[i].first){
              continue;
          }
          else if(sum>temp[i].first){
              ans=max(temp[i].first,sum-temp[i].second);
              break;
          }
          else if(sum==temp[i].first){
              ans=temp[i].first;
              break;
          }
      }
      if(ans!=0){
          cout<<ans<<endl;
      }
      else{
          int s=0;
          for(int i=0;i<n;i++){
              s+=b[i];
          }
          cout<<s<<endl;
      }
   }
}
