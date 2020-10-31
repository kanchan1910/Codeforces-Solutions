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
int n;
cin>>n;
vector<pair<string,pair<int,int>>>v;
for(int i=0;i<n;i++){
    string str;
    cin>>str;
    int a,b;
    cin>>a>>b;
    v.pb({str,{a,b}});
}
/*for(int i=0;i<v.size();i++){
    cout<<(v[i].first)<<" "<<(v[i].second.first)<<" "<<(v[i].second.second)<<endl;
}*/
int f=0;
for(int i=0;i<v.size();i++){
    if((v[i].second.first>=2400)&&(v[i].second.second>v[i].second.first)){
        f=1;
    }
}
if(f==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
