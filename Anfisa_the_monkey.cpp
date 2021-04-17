#include<bits/stdc++.h>
using namespace std;
int main(){
int k,a,b;
cin>>k>>a>>b;
string str;
cin>>str;
int n=str.length();
if(k*a>n||k*b<n){
    cout<<"No solution"<<endl;
}
else{
    int len=n/k;
    int i=0;
    while(k>1){
        string temp(str,i,len);
        cout<<temp<<endl;
        i+=len;
        k--;
    }
    string temp(str,i,n);
    cout<<temp<<endl;
}
}
