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
    //brute force constraints are small
    boost;
   int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        cout<<1<<endl;
    }
    else{
        unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int ans=0;
    for(int i=2;i<=2*n;i++){//ek member ka min weight 1 h or max weight n hai to team(2 member ki) ka
    //sum 2 se 2*n range krega
        int val=0;
        for(auto x:m){
           int othermember=(i-x.first);//other member ka sum i-x.firts hoga ,first member ka x.first hoga
           if((othermember>=1)&&(m.find(othermember)!=m.end())){
               val+=min(x.second,m[othermember]);//ji min hoga utti hi teams bn paegi
           }
        }
        val/=2;//ex x.first=1,then i-x.first =2 for i=3,to ise ek val aa gya similarly jb x.first =2 the i-x.first=1 jb i=3 tbhi hrke 2 baar aa gya h islie val/2
        ans=max(ans,val);//max number of teams with all the possible sum we have checked
    }
    cout<<ans<<endl;
    }
   
    }
   
}
//TC: O(98*m.size())
//SC: O(N)