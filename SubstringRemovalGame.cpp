#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define p_q priority_queue
#define fi first
#define se second
#define ub upper_bound
#define lb lower_bound
#define maxi max_element
#define mini min_element
using namespace std;
 
int main(){
    boost;
    int t;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
       int count=0;
       int n=str.length();
       vector<int>v;
       for(int i=0;i<n;i++){
           if(str[i]!='1'){
               if(count!=0){
                  v.pb(count);   
               }
               count=0;
           }
           else{
               count++;
           }
       }
       if(count!=0){
           v.pb(count);
       }
       if(v.size()==0){
           cout<<0<<endl;
           
       }
    else{
        
    sort(v.begin(),v.end(),greater<int>());
    
int alice=0;

for(int i=0;i<v.size();i++){
    if(i%2==0){
         alice+=v[i];
    }
}
cout<<alice<<endl;
   } }
}
//TC:O(NLOGN)
//SC:O(1)