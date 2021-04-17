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
  int n;
  cin>>n;
  int arr[2*n];
  for(int i=0;i<2*n;i++){
      cin>>arr[i];
  }
  unordered_set<int>s;
  vector<int>ans;
  for(int i=0;i<2*n;i++){
      if(s.find(arr[i])==s.end()){
          ans.pb(arr[i]);
          s.insert(arr[i]);
      }
  }
  for(int x:ans){
      cout<<x<<" ";
  }
  cout<<endl;
    }
}
