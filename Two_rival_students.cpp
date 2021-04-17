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
    int n,x,a,b;
    cin>>n>>x>>a>>b;
    if(x==0){
        cout<<abs(a-b)<<endl;
        continue;
    }
    if(a==1&&b==n||a==n&&b==1){
        cout<<abs(a-b)<<endl;
        continue;
    }
   if((abs(a-b)+x)<=(n-1)){
       cout<<(abs(a-b)+x)<<endl;
   }
   else{
       cout<<(n-1)<<endl;
   }
    }
}
