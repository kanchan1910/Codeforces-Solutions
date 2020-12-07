#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
  lli c1,c2,c3,c4;
  cin>>c1>>c2>>c3>>c4;
  lli n,m;
  cin>>n>>m;
  lli a[n],b[m];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  for(int i=0;i<m;i++){
      cin>>b[i];
  }
  lli ans=0;
  lli k=0;
  lli bus=INT_MAX;
  lli troll=INT_MAX;
  for(int i=0;i<n;i++){
      k+=min(c2,c1*a[i]);
  }
  bus=min(bus,min(c3,k));
  k=0;
  for(int i=0;i<m;i++){
      k+=min(c2,c1*b[i]);
  }
  troll=min(troll,min(c3,k));
  ans=min(bus+troll,c4);
  cout<<ans<<endl;
}
