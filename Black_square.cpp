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
int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
string str;
cin>>str;
int ans=0;
int n=str.length();
for(int i=0;i<n;i++){
    if(str[i]=='1')
    ans+=a1;
    else if(str[i]=='2')
    ans+=a2;
    else if(str[i]=='3')
    ans+=a3;
    else if(str[i]=='4')
    ans+=a4;
}
cout<<ans<<endl;
}
