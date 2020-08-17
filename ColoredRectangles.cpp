#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define p_q priority_queue
#define fi first
#define se second
#define ub upper_bound
#define lb lower_bound
#define maxi max_element
#define mini min_element
using namespace std;
lli f[205][205][205];
int fun(lli i,lli j,lli k,lli &r,lli &g,lli &b,vector<lli>&rr,vector<lli>&gg,vector<lli>&bb){
    if(i>=r&&j>=g||j>=g&&k>=b||i>=r&&k>=b){
        return 0;
    }
    if(f[i][j][k]!=-1){
        return f[i][j][k];
    }
    lli ans1=0,ans2=0,ans3=0,ans=0;
    if(i<r&&j<g){
        ans1=max(ans1,rr[i]*gg[j]+fun(i+1,j+1,k,r,g,b,rr,gg,bb));
    }
    if(j<g&&k<b){
        ans2=max(ans2,gg[j]*bb[k]+fun(i,j+1,k+1,r,g,b,rr,gg,bb));
    }
    if(i<r&&k<b){
        ans3=max(ans3,rr[i]*bb[k]+fun(i+1,j,k+1,r,g,b,rr,gg,bb));
    }
    ans=max(ans,max(ans1,ans2));
    ans=max(ans,ans3);
    return f[i][j][k]=ans;
}
int main(){
    boost;
    lli r,g,b;
cin>>r>>g>>b;
vector<lli>rr,gg,bb;
for(lli i=0;i<r;i++){
    lli x;
    cin>>x;
    rr.pb(x);
}
for(lli i=0;i<g;i++){
    lli x;
    cin>>x;
    gg.pb(x);
}
for(lli i=0;i<b;i++){
    lli x;
    cin>>x;
    bb.pb(x);
}
sort(rr.begin(),rr.end(),greater<lli>());
sort(gg.begin(),gg.end(),greater<lli>());
sort(bb.begin(),bb.end(),greater<lli>());
memset(f,-1,sizeof(f));
cout<<fun(0,0,0,r,g,b,rr,gg,bb)<<endl;
}
//TC:O(2^N)
//SC:O(N)