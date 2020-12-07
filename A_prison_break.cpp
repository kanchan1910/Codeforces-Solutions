#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
     lli n,m,r,c;
     cin>>n>>m>>r>>c;
     cout<<max({abs(1-r)+abs(1-c),abs(n-r)+abs(m-c),abs(1-r)+abs(m-c),abs(n-r)+abs(1-c)})<<endl;
    }
}
