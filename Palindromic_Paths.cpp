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
      int n,m;
      cin>>n>>m;
      int arr[n][m];
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              cin>>arr[i][j];
          }
      }
      int count[n+m][2];
      for(int i=0;i<n+m;i++){
          count[i][0]=0;
          count[i][1]=0;
      }
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(arr[i][j]==1){
                  count[i+j+1][1]++;
              }
              else{
                  count[i+j+1][0]++;
              }
          }
      }
      int i=1;
      int j=n+m-1;
      int ans=0;
      while(i<j){
          ans+=min(count[i][0]+count[j][0],count[i][1]+count[j][1]);
          i++;
          j--;
      }
      cout<<ans<<endl;
    }
}
