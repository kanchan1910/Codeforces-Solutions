#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
   lli n;
   cin>>n;
   vector<lli>arr(n);
   for(lli i=0;i<n;i++){
       cin>>arr[i];
   }
   if(n<3){
       cout<<0<<endl;
       continue;
   }
   lli ans=0;
   lli nn;
   sort(arr.begin(),arr.end());
   for(lli i=0;i<n;i++){
       lli min=arr[i];
       lli max=arr[i]+2;
       lli find=upper_bound(arr.begin(),arr.end(),max)-arr.begin();
       find--;
       if((find-i)>=1){
           nn=find-i-1; 
           ans+=(nn*(nn+1))/2;
       }
   }
   cout<<ans<<endl;
    }
}
