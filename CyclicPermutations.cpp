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
lli mpower(lli x, lli y){
    lli res = 1;
    x = x % mod;
    while(y > 0){
        if(y & 1) res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
lli fact(lli n){
    lli f=1;
    for(int i=2;i<=n;i++){
        f=(f*i)%mod;
    }
    return f;
}
int main(){
    boost;
   //int t;
    //cin>>t;
    //while(t--){
    int n;
    cin>>n;
    lli ans=fact(n);
    lli unimodal=mpower(2,n-1);
    ans-=unimodal;
    if(ans<0){
        ans+=mod;
    }
    cout<<ans<<endl;
 //  }
}
//TC:O(N)
//SC:O(1)
/*there has to at most one peak that is the element n– all acyclic permutations increase, then reach n, and, finally, decrease. 
These are formally called unimodal permutations.or every element, except n, we have the choice of pushing it to the front or the back,
making the total number of ways equal to 2n−1.
The answer is n!−2n−1.*/