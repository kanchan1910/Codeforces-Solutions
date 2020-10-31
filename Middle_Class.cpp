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
    int t;
    cin>>t;
    while(t--){
 lli n,x;
 cin>>n>>x;
 lli arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 sort(arr,arr+n,greater<int>());
 lli no=1;
 lli cur=0;
 lli ans=0;
 for(int i=0;i<n;i++){
     cur+=arr[i];
     if((cur/no)>=x){
         ans++;
         no++;
     }
     else
     {
         break;
     }
 }
 cout<<ans<<endl;
    }
}
