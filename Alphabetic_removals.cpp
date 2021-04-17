#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
int n,k;
cin>>n>>k;
string str;
cin>>str;
for(char x='a';x<='z';x++){
    if(k==0)
    break;
    for(int i=0;i<n;i++){
        if(k==0)
        break;
        if(str[i]==x){
            str[i]=' ';
            k--;
        }
    }
}
for(int i=0;i<n;i++){
    if(isspace(str[i]))
    continue;
    else
    cout<<str[i];
}
cout<<endl;
}
