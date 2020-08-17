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
   /* condition for impossiblities for generation of non degenerate triangles
   a+b<=c,b+c<=a,a+c<=b*/
   /*it is sorted array so the largest element would be the last element of the array and the two smallest 
   elements would be the two starting elements of the array*/
   /*so if our condition of imposiblity fails on starting 2 elements then it will definitely
   fail for other pairs which will be greater than these 2 taken as the array is sorted*/ 
   if(arr[0]+arr[1]<=arr[n-1]){
       cout<<1<<" "<<2<<" "<<n<<endl;
   }
   else{
       cout<<-1<<endl;
   }
}}

//TC:O(1)
//SC:O(1)
