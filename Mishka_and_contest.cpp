#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=0;
int l=0,r=n-1;
while(l<=r){
    if(arr[l]<=k){
        ans++;
        l++;
    }
    else if(arr[r]<=k){
        ans++;
        r--;
    }
    else {
        break;
    }
}
cout<<ans<<endl;
}
