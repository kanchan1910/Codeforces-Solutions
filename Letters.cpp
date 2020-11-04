#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
lli n,m;
cin>>n>>m;
lli arr[n+1];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
lli brr[m+1];
for(int i=1;i<=m;i++){
    cin>>brr[i];
}
lli sum=0;
lli i=1;
for(int j=1;j<=m;j++){
    while(brr[j]>arr[i]+sum){
        sum+=arr[i];
        i++;
    }
    cout<<i<<" "<<(brr[j]-sum)<<endl;
}
}
