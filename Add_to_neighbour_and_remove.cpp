#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int fun(int arr[],int k,int &maxi,int n){
    if(k<maxi){
        return -1;
    }
    int ans=0;
    int tmp=0;
    int j=0;
    for(int i=0;i<n;i++){
        tmp+=arr[i];
        if(tmp==k){
            ans+=(i-j);
            j=i+1;
            tmp=0;
        }
        else if(tmp>k){
            return -1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   int arr[n];
   int maxi=0;
   int sum=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       sum+=arr[i];
       maxi=max(maxi,arr[i]);
   }
   int ans=n-1;
   for(int i=1;i<=sqrt(sum);i++){
       if(sum%i==0){
           int f1=i;
           int f2=sum/i;
           int fun1=fun(arr,f1,maxi,n);
           int fun2=fun(arr,f2,maxi,n);
           if(fun1!=-1){
               ans=min(ans,fun1);
           }
           if(fun2!=-1){
               ans=min(ans,fun2);
           }
       }
   }
   cout<<ans<<endl;
    }
}
