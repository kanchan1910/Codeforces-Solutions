#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define p_q priority_queue
#define fi first1
#define se second
#define ub upper_bound
#define lb lower_bound
#define maxi max_element
#define mini min_element
using namespace std;

int main(){
    boost;
    int r,b;
    cin>>r>>b;
    int diff=min(r,b);
    cout<<diff<<" ";
    r-=diff;
    b-=diff;
    int rem=0;
    if(r!=0)
    rem=r;
    else if(b!=0)
    rem=b;
    if(rem%2==0)
    cout<<(rem/2)<<endl;
    else
    cout<<(rem-1)/2<<endl;
}
