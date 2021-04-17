#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int a,b;
      cin>>a>>b;
      string str;
      cin>>str;
      int first=-1;
      int last=-1;
      int n=str.length();
      for(int i=0;i<n;i++){
          if(str[i]=='1'){
              first=i;
              break;
          }
      }
      for(int i=n-1;i>=0;i--){
          if(str[i]=='1'){
              last=i;
              break;
          }
      }
      if(first==-1&&last==-1){
          cout<<0<<endl;
      }
      else{
          int ans=a;
          for(int i=first;i<=last;i++){
              int count=0;
              while(str[i]=='0'){
                  count++;
                  i++;
              }
              ans+=min(count*b,a);
          }
          cout<<ans<<endl;
      }
   }
}
