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
    lli n,k;
    cin>>n>>k;
    vector<lli>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
   if(n==1){
       cout<<0<<endl;
   }
   else{
       
       if(k%2!=0){
           lli maxxii=*maxi(arr.begin(),arr.end());
           for(int i=0;i<n;i++){
               cout<<(maxxii-arr[i])<<" ";
           }
           cout<<endl;
       }
       else{
           for(int i=0;i<2;i++){
               lli maxxii=*maxi(arr.begin(),arr.end());
               for(int i=0;i<n;i++){
                   arr[i]=(maxxii-arr[i]);
               }
           }
           for(int i=0;i<n;i++){
               cout<<arr[i]<<" ";
           }
           cout<<endl;
       }
    }
 
    }
  
}
//TC: O(1)
//SC: O(N)