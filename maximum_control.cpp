#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main(){
int n;
cin>>n;
unordered_map<int,int>m;
for(int i=0;i<n-1;i++){
    int u,v;
    cin>>u>>v;
    m[u]++;
    m[v]++;
}
int ans=0;
for(auto x:m){
    if(x.second==1)
    ans++;
}
cout<<ans<<endl;
}
