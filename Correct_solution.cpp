#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
string s,t;
cin>>s>>t;
sort(s.begin(),s.end());
for(int i=0;i<s.length();i++){
    if(s[i]!='0'){
        swap(s[i],s[0]);
        break;
    }
}
if(s==t)
cout<<"OK"<<endl;
else
cout<<"WRONG_ANSWER"<<endl;
}
