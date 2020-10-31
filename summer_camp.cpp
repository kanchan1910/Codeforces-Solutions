#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 if(n<=9){
     cout<<n<<endl;
 }
 else{
     string str;
     for(int i=1;i<=n;i++){
         str+=to_string(i);
     }
     cout<<str[n-1]<<endl;
 }
}
