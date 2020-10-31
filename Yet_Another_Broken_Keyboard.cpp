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
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    unordered_set<char>s;
    for(int i=0;i<k;i++){
        char x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<n;i++){
        if(s.find(str[i])==s.end())
        str[i]='0';
        else
        str[i]='1';
    }
   lli ans=0;
   str.push_back('0');
   for(int i=0;i<=n;i++){
       int j=i;
       while(j<=n&&str[j]=='1')
       j++;
       int len=(j-i);
       ans+=(len* 1ll*(len+1))/2;
       i=j;
   }
   cout<<ans<<endl;
}
