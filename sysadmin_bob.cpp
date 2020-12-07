#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main(){
string str;
cin>>str;
vector<int>v;
for(int i=0;i<str.length();i++){
    if(str[i]=='@')
    v.pb(i);
}
int n=v.size();
if(n==0){
    cout<<"No solution"<<endl;
    return 0;
}
for(int i=1;i<n;i++){
    if((v[i]-v[i-1])<3){
        cout<<"No solution"<<endl;
        return 0;
    }
}
if(v[0]==0){
         cout<<"No solution"<<endl;
        return 0;
    }
if(v[n-1]==str.length()-1){
         cout<<"No solution"<<endl;
        return 0;
    }
bool first=false;
int from =0;
for(int i=0;i<n;i++){
    if(first==true){
        cout<<",";
    }
    if(i<n-1){
        cout<<str.substr(from,v[i]-from+2);
    }
    else{
        cout<<str.substr(from);
    }
    first=true;
    from=v[i]+2;
}
}
