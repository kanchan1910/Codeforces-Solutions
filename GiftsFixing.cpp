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
    vector<int>arr(n),brr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    lli moves=0;
    int minia=*mini(arr.begin(),arr.end());//min element in arr
    int minib=*mini(brr.begin(),brr.end());//min element in brr
    //in any moves we can only decreament elements and then we have to make them all equal in an array so,
    //so to make them equal we have to make all elements of array equal to the min element of array(as we can't increament any element but we can decreament to make them equal 
    // to min element)
    for(int i=0;i<n;i++){
        if(arr[i]!=minia&&brr[i]!=minib){
            //to make minimum moves ,i have written this condition first 
            int diff=min(arr[i]-minia,brr[i]-minib);
            arr[i]-=diff;
            brr[i]-=diff;
            moves+=diff;
        }
        if(arr[i]!=minia){
            int diff=arr[i]-minia;
            arr[i]-=diff;
            moves+=diff;
        }
        if(brr[i]!=minib){
            int diff=brr[i]-minib;
            brr[i]-=diff;
            moves+=diff;
        }
    }
    cout<<moves<<endl;
    }
   
}
//TC: O(N)
//SC: O(1)

