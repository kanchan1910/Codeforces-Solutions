#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define endl '\n'

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
  int brr[n];
  for(int i=0;i<n;i++){
      cin>>brr[i];
  }
  int f1=0,f2=0;int flag=0;
  for(int i=0;i<n;i++){
      if(arr[i]<brr[i]&&f2==0){
          cout<<"NO"<<endl;
          flag=1;
          break;
      }
      if(arr[i]>brr[i]&&f1==0){
           cout<<"NO"<<endl;
           flag=1;
           break;
      }
       if(arr[i]<0){
          f1=1;
      }
      if(arr[i]>0){
          f2=1;
      }
  }
  if(flag==0)
  cout<<"YES"<<endl;
}
}
