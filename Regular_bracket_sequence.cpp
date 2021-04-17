#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
 string str;
 cin>>str;
 stack<char>s;
 for(int i=0;i<str.length();i++){
     if(str[i]=='(')
     s.push(str[i]);
     else{
         if(s.empty()){
             s.push(str[i]);
         }
         else{
            if(s.top()=='('){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
         }
     }
 }
 cout<<(str.length()-s.size())<<endl;
}
