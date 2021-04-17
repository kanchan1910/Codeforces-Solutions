#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define endl '\n'

int main(){
    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        lli ans=0;
        while(n!=1){
            ans++;
            if(n%2==0){
                n=n/2;
            }
            else if(n%3==0){
                n=2*n/3;
            }
            else if(n%5==0){
                n=4*n/5;
            }
            else{
                 ans=-1;
                 break;
            }
        }
        cout<<ans<<endl;
    }
}
