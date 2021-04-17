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
bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second)
    return a.first>b.first;
    else
    return a.second>b.second;
}
int main(){
int n;
cin>>n;
vector<pair<int,int>>temp;
while(n--){
    int a,b;
    cin>>a>>b;
    temp.pb({a,b});
}
sort(temp.begin(),temp.end(),comp);
/*for(int i=0;i<temp.size();i++){
    cout<<(temp[i].first)<<" "<<(temp[i].second)<<endl;
}*/
int counter=1;
int score=0;
for(int i=0;i<temp.size()&&counter>0;i++){
    score+=temp[i].first;
    counter+=temp[i].second;
    counter--;
}
cout<<score<<endl;
}
