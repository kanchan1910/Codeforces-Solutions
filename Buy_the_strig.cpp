#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string str;
    cin>>str;
    int c=0,cc=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            c++;
        }
        else{
            cc++;
        }
    }
    cout<<(min({c0*c+c1*cc,h*c+n*c1,h*cc+n*c0}))<<endl;
    }
}
