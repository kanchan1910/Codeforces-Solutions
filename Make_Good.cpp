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
lli n;
cin>>n;
lli arr[n];
lli x=0;
lli sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
    x^=arr[i];
}
if(2*x==sum){
    cout<<0<<endl;
    cout<<endl;
}
else{
    cout<<2<<endl;
    cout<<(x)<<" "<<(x+sum)<<endl;
}
    }
}
/* It's enough to add to the array numbers X and S+X. Indeed, S+X+(S+X)=2(S+X), and X⊕X⊕(S+X)=(S+X). We spent only 2 numbers!*/
