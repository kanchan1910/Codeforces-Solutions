#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int last=4*n;
       while(n--){
           cout<<last<<" ";
           last-=2;
       }
       cout<<endl;
   }
}
