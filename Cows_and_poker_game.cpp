#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main(){
    int n;
    cin>>n;
string str;
cin>>str;
int a=0,ii=0;
for(int i=0;i<str.length();i++){
    if(str[i]=='A'){
        a++;
    }
    else if(str[i]=='I'){
        ii++;
    }
}

if(ii==0){
    cout<<a<<endl;
}
else if(ii==1){
    cout<<1<<endl;
}
else if(ii>1){
    cout<<0<<endl;
}
}
