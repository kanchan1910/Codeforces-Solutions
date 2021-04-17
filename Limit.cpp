#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int a[n];
  int b[m];
  for(int i=0;i<=n;i++){
      cin>>a[i];
  }
  for(int j=0;j<=m;j++){
      cin>>b[j];
  }
  double fraction=(double)a[0]/(double)b[0];
  if(m>n){
      cout<<"0/1"<<endl;
  }
  else if(n>m&&fraction>0){
      cout<<"Infinity"<<endl;
  }
  else if(n>m&&fraction<0){
      cout<<"-Infinity"<<endl;
  }
  else if(n==m){
      int num=a[0];
      int deno=b[0];
      int gg=__gcd(num,deno);
      num/=gg;
      deno/=gg;
      if(deno<0){
          num*=-1;
          deno*=-1;
      }
      cout<<num<<"/"<<deno<<endl;
  }
}
