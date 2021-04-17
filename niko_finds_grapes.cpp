#include<bits/stdc++.h>
using namespace std;
int main(){
 int chest,keys;
 cin>>chest>>keys;
 int arrch[chest];
 int arrkey[keys];
 for(int i=0;i<chest;i++){
     cin>>arrch[i];
 }
 for(int i=0;i<keys;i++){
     cin>>arrkey[i];
 }
 int evench=0,oddch=0,evenkey=0,oddkey=0;
 for(int i=0;i<chest;i++){
     if(arrch[i]%2==0){
         evench++;
     }
     else{
         oddch++;
     }
 }
  for(int i=0;i<keys;i++){
     if(arrkey[i]%2==0){
         evenkey++;
     }
     else{
         oddkey++;
     }
 }
 //cout<<evench<<" "<<oddch<<" "<<evenkey<<" "<<oddkey<<endl;
 int ans=0;
 ans+=min(evenkey,oddch);
 evenkey-=ans;
 oddch-=ans;
 ans+=min(evench,oddkey);
 cout<<ans<<endl;
}
