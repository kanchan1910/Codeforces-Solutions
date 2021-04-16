#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
      string str;
      cin>>str;
      if(str=="2020"){
          cout<<"YES"<<endl;
          continue;
      }
      if(str[0]=='2'&&str[1]=='0'&&str[2]=='2'&&str[3]=='0'){
          cout<<"YES"<<endl;
          continue;
      }
        if(str[0]=='2'&&str[1]=='0'&&str[2]=='2'&&str[n-1]=='0'){
          cout<<"YES"<<endl;
          continue;
      }
        if(str[0]=='2'&&str[1]=='0'&&str[n-2]=='2'&&str[n-1]=='0'){
          cout<<"YES"<<endl;
          continue;
      }
        if(str[0]=='2'&&str[n-3]=='0'&&str[n-2]=='2'&&str[n-1]=='0'){
          cout<<"YES"<<endl;
          continue;
      }
        if(str[n-4]=='2'&&str[n-3]=='0'&&str[n-2]=='2'&&str[n-1]=='0'){
          cout<<"YES"<<endl;
          continue;
      }
      cout<<"NO"<<endl;
    }
}
