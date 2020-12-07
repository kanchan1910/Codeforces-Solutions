#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
bool fun(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
   int n,x;
   cin>>n>>x;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   if(fun(arr,n)==true){
       cout<<0<<endl;
       continue;
   }
   bool f=false;
   int ans=0;
   for(int i=0;i<n;i++){
       if(arr[i]>x){
           ans++;
           swap(x,arr[i]); 
       }
      if(fun(arr,n)==true){
       f=true;
       break;
      }
   }
   if(f==true){
       cout<<ans<<endl;
   }
   else{
       cout<<-1<<endl;
   }
    }
}
