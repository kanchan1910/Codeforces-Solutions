#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main(){
lli n;
cin>>n;
lli p[n];
for(int i=0;i<n;i++){
    cin>>p[i];
}
lli a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
vector<set<lli>>v(4);
for(int i=0;i<n;i++){
    v[a[i]].insert(p[i]);
    v[b[i]].insert(p[i]);
}
lli m;
cin>>m;
for(int i=0;i<m;i++){
    lli x;
    cin>>x;
    lli val=v[x].size();
    if(val>0){
        auto itr=v[x].begin();
        lli ans=*itr;
        cout<<ans<<" ";
        for(int j=1;j<=3;j++){
            if(v[j].find(ans)!=v[j].end()){
                v[j].erase(ans);
            }
        }
    }
    else{
        cout<<-1<<" ";
    }
}
}
