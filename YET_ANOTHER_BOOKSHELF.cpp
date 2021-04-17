//CODEFORCES ROUND 677 DIV3
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
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
int l=-1,r=-1;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        l=i;
        break;
    }
}
for(int j=n-1;j>=0;j--){
    if(arr[j]==1){
        r=j;
        break;
    }
}
int ans=0;
if(l!=-1&&r!=-1){
    for(int i=l;i<=r;i++){
        if(arr[i]==0){
            ans++;
        }
    }
    cout<<ans<<endl;
}
}
}
