#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
       int n;
       cin>>n;
       set<lli>s;
       lli ans=0;
       s.insert(0);
       lli cur_sum=0;
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           cur_sum+=x;
           if(s.count(cur_sum)){
               ans++;
               s.clear();
               s.insert(0);
               s.insert(x);
               cur_sum=x;
           }
           else{
               s.insert(cur_sum);
           }
       }
       cout<<ans<<endl;
}
