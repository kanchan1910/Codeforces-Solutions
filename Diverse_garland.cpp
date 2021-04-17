#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string str;
cin>>str;
int count=0;
for(int i=0;i<n-1;i++){
    if(str[i]==str[i+1]){
        count++;
        if(str[i]!='R'&&str[i+2]!='R'){
            str[i+1]='R';
        }
        if(str[i]!='G'&&str[i+2]!='G'){
            str[i+1]='G';
        }
        if(str[i]!='B'&&str[i+2]!='B'){
            str[i+1]='B';
        }
    }
}
cout<<count<<endl;
cout<<str<<endl;
}
