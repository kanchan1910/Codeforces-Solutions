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
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        //if n==1 means single element is there already in the given array so return yes
        cout<<"YES"<<endl;
    }
    else{
     int flag=0;
    sort(arr,arr+n);
    
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])>1){
 //if max. consecutive difference is greater then 1 between any 2 elements then it is not possible to obtain the array of single elment
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }    
    }
   
    }
   
}
//TC: O(NLOGN)
//SC: O(1)

