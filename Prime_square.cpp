#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(i==j||i==j-1||i==j+1){
              cout<<1<<" ";
          }
          else{
              cout<<0<<" ";
          }
      }
      cout<<endl;
  }
}
}
