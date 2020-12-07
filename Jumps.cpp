#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
    lli n;
    cin>>n;
    lli sum=0;
    bool f=false;
    int i;
    for(i=1;i<=n;i++){
        sum+=i;
        if(sum==n){
            f=true;
            break;
        }
        if(sum>n){
            break;
        }
    }
    if(f==true){
        cout<<i<<endl;
    }
    else{
      lli extra=sum-n;
    if(extra==1){
        cout<<i+1<<endl;
    }
    else{
        cout<<i<<endl;
    }   
    }
    }
}
