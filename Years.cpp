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
map<int,int>m;
int n;
cin>>n;
while(n--){
    int st,en;
    cin>>st>>en;
    m[st]++;
    m[en]--;
}
int sum=0;
int maxi=0;
int year=0;
for(auto x:m){
    sum+=x.second;
    if(maxi<sum){
        maxi=sum;
        year=x.first;
    }
}
cout<<year<<" "<<maxi<<endl;
}
