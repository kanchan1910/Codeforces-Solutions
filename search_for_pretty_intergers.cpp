#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++)
cin>>a[i];
for(int j=0;j<m;j++)
cin>>b[j];
int ans=INT_MAX;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==b[j]){
            ans=min(ans,a[i]);
        }
        else{
            ans=min(ans,min(a[i]*10+b[j],b[j]*10+a[i]));
        }
    }
}
cout<<ans<<endl;
}
