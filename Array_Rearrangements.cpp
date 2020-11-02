#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define p_q priority_queue
#define fi first1
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
    int n,x;
    cin>>n>>x;
   int arr[n],brr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       cin>>brr[i];
   }
   int f=0;
   sort(arr,arr+n);
   sort(brr,brr+n,greater<int>());
   for(int i=0;i<n;i++){
       if((arr[i]+brr[i])>x)
       {
           f=1;
           break;
       }
   }
   if(f==1){
       cout<<"No"<<endl;
   }
   else{
       cout<<"Yes"<<endl;
   }
}
}
