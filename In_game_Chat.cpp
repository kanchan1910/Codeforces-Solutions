#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(str[i]!=')'){
            break;
        }
        count++;
    }
    int rem=n-count;
    if(count>rem){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
