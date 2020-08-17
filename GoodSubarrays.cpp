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
    int t;
    cin>>t;
    while(t--){
      lli n;
      cin>>n;
        string str;
        cin>>str;
        lli arr[n];
        for(int i=0;i<n;i++){
            arr[i]=(str[i]-'0')-1;
        }
       /* for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;*/
        unordered_map<int,int>m;
       lli cur_sum=0;
        lli ans=0;
        for(int i=0;i<n;i++){
            cur_sum+=arr[i];
            if(cur_sum==0){
                ans++;
            }
            if(m.find(cur_sum-0)!=m.end()){
                ans+=m[cur_sum-0];
            }
            m[cur_sum]++;
        }
        cout<<ans<<endl;
    }
}
//TC:O(N)
//SC:O(N)