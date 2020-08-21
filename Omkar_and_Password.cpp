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
    int n;
    cin>>n;
    int arr[n];
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()==1){
        //if set size is 1 means we have all the same elements in the array then its never possible to select two adjacent different numbers and so 
        //we can't reduce its length at all
        cout<<n<<endl;
    }
    else{
        //if atleast 1 diff element is there then always we can reduce its length to 1
        cout<<1<<endl;
    }
    }
  
}
//TC: O(1)
//SC: O(N)