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
    lli n,k;
    cin>>n>>k;
    if(k%(n-1)==0){
        cout<<(((k*n)/(n-1))-1)<<endl;
    }
    else{
         cout<<(((k*n)/(n-1)))<<endl;
    }
}
}
