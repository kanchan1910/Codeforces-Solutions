// 2 jan 2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int t;
   
   cin>>t;
   
   while(t--){
       
       string str;
       
       cin>>str;
       
       int n=str.length();
       
       if(n==1){
           
           cout<<0<<endl;
           
           continue;
           
       }
       if(n==2){
           
           if(str[0]==str[1]){
               
               cout<<1<<endl;
               
               continue;
               
           }
           else{
               
               cout<<0<<endl;
               
               continue;
               
           }
       }
       
       int ans=0;
       
       for(int i=1;i<str.length();i++){
           
           if(str[i]==str[i-1]||(i-2>=0&&str[i]==str[i-2])){
               
               str[i]='*';
               
               ans++;
               
           }
       }
       
       cout<<ans<<endl;
   }
}
