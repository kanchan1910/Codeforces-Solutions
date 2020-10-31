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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=(i+1)){
                l=i+1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=(i+1)){
                r=i+1;
                break;
            }
        }
        if(l==0){
            cout<<0<<endl;
            continue;
        }
        int ans=1;
        for(int i=l;i<r;i++){
            if(arr[i]==(i+1)){
                ans=2;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
