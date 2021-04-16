#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
int main(){
int t;
cin>>t;
while(t--){
lli n;
cin>>n;
while(true){
   string str=to_string(n);
   int f=0;
   for(int i=0;i<str.length();i++){
       if((str[i]-'0')!=0&&n%(str[i]-'0')!=0){
           f=1;
           break;
       }
   }
   if(f==0){
       break;
   }
   n++;
}
cout<<n<<endl;
}
}
