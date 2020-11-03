#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
int main(){
int n;
cin>>n;
string str;
cin>>str;
unordered_map<string,int>m;
for(int i=0;i<n-1;i++){
    m[str.substr(i,2)]++;
}
string ans="";
int temp=INT_MIN;
for(auto x:m){
    if(temp<x.second){
        temp=x.second;
        ans=x.first;
    }
}
cout<<ans<<endl;
}
