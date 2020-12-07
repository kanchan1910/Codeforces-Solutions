#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     string str;
     cin>>str;
     int c1=0,c2=0;
    int ans(0);
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            c1++;
        }
        else if(str[i]=='['){
            c2++;
        }
        else if(str[i]==')'){
            if(c1!=0){
                c1--;
                ans++;
            }
        }
        else if(str[i]==']'){
            if(c2!=0){
                c2--;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    }
}
