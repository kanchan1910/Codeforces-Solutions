//number of elements
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int f[510];
int n,m,q;
int arr[510][510];
void fun(int i){
    int ans=0;
    f[i]=0;
    for(int j=0;j<m;j++){
        if(arr[i][j]==1){
            ans++;
        }
        else{
            ans=0;
        }
        f[i]=max(f[i],ans);
    }
}
int main(){
cin>>n>>m>>q;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    fun(i);
}
while(q--){
    int i,j;
    cin>>i>>j;
    i--,j--;
    arr[i][j]^=1;
    fun(i);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,f[i]);
    }
    cout<<ans<<endl;
}
}
