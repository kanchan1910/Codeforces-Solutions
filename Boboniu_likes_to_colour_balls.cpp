#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int r,g,b,w;
cin>>r>>g>>b>>w;
int odd=0;
if(r%2!=0)
odd++;
if(g%2!=0)
odd++;
if(b%2!=0)
odd++;
if(w%2!=0)
odd++;
if(odd<=1){
    cout<<"Yes"<<endl;
}
else{
    if(min(r,min(g,b))==0){
        cout<<"No"<<endl;
    }
    else{
        r--,b--,g--,w+=3;
        odd=0;
        if(r%2!=0)
         odd++;
        if(g%2!=0)
         odd++;
        if(b%2!=0)
         odd++;
        if(w%2!=0)
         odd++;
        if(odd<=1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}}
}
