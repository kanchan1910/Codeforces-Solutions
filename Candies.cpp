#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   for(int k=2;k<=29;k++){
       int val=((1<<k)-1);
       if(n%val==0){
           cout<<(n/val)<<endl;
           break;
       }
   }
}
}
