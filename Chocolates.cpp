#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
  int n;
  cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
lli ans=arr[n-1];
for(int i=n-2;i>=0;i--){
    if(arr[i+1]==0)
    {
        break;
    }
    if(arr[i+1]>arr[i]){
        ans+=arr[i];
    }
    else{
        ans+=arr[i+1]-1;
        arr[i]=arr[i+1]-1;
    }
}
cout<<ans<<endl;
}
