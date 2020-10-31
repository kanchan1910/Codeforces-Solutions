#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int l1,r1,l2,r2;
   cin>>l1>>r1>>l2>>r2;
   //coincidence
   if((l1==l2)&&(r1==r2)){
       cout<<l1<<" "<<r2<<endl;
       continue;
   }
   if((l1>l2)&&(r1<r2)){
       cout<<l1<<" "<<l2<<endl;
       continue;
   }
   if((l1<l2)&&(r2<r1)){
       cout<<l1<<" "<<l2<<endl;
       continue;
   }
   //non overlapping
   if(r1<l2){
       cout<<l1<<" "<<l2<<endl;
       continue;
   }
   if(r2<l1){
       cout<<l1<<" "<<l2<<endl;
       continue;
   }
   //overlapping
   if(l1!=l2){
       cout<<l1<<" "<<l2<<endl;
   }
   else{
       cout<<r1<<" "<<r2<<endl;
   }
}
}
