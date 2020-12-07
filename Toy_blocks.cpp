#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
     lli n;
     cin>>n;
     lli arr[n];
     lli sum=0;
     for(int i=0;i<n;i++){
         cin>>arr[i];sum+=arr[i];
     }
     lli val=ceil((sum*1.0)/(n-1));
     lli s=0;
     sort(arr,arr+n);
     if(arr[n-1]<=val){
         s=val*(n-1);
     }
     if(arr[n-1]>val){
         s=arr[n-1]*(n-1);
     }
     
     cout<<s-sum<<endl;
    }
}
