#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
  lli p,q;
  cin>>p>>q;
  lli n;
  cin>>n;
  lli arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  bool f=false;
  for(int i=0;i<n;i++)
  {
      if(q==0||p/q<arr[i]){
          f=true;
          break;
      }
      else{
          p-=arr[i]*q;
          swap(p,q);
      }
  }
  if(f==false&&q==0){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}
