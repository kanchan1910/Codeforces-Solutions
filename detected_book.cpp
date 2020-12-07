#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
  int n;
  cin>>n;
 int arr[n+1];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
int cur=1;
int ans=0;
for(int i=1;i<=n;i++){
    cur=max(cur,arr[i]);
    if(cur==i){
        ans++;
    }
}
cout<<ans<<endl;
}
