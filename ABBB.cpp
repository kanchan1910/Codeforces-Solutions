#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
string str;
cin>>str;
stack<char>s;
int n=str.length();
for(int i=0;i<n;i++){
    if(str[i]=='A'){
        s.push(str[i]);
    }
    else{
        if(s.empty()){
            s.push(str[i]);
        }
        else{
            s.pop();
        }
    }
}
cout<<s.size()<<endl;
    }
}
