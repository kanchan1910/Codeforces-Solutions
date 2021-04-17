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
string str;
cin>>str;
vector<int>v;
for(int i=0;i<str.length();i++){
    if(str[i]!='+')
    v.pb(str[i]-'0');
}
string ans="";
sort(v.begin(),v.end());
int j=0;
for(int i=0;i<str.length();i++){
    if(str[i]=='+')
    ans+="+";
    else
    {
    ans+=(to_string(v[j]));
    j++;
    }
}
cout<<ans<<endl;
}
