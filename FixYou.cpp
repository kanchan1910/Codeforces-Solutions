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
   lli n,m;
   cin>>n>>m;
   lli count=0;
   char arr[105][105];
        for(lli i=1;i<=n;i++){
       for(lli j=1;j<=m;j++){
           cin>>arr[i][j];
       }
   }
   if(n==1&&m==1){
       cout<<0<<endl;
   }
   else{
   
   for(lli j=1;j<=m-1;j++){
       if(arr[n][j]!='R'){
           count++;
       }
   }
   for(lli i=1;i<=n-1;i++){
       if(arr[i][m]!='D'){
           count++;
       }
   }
    
       cout<<count<<endl;}
   }
   
}
//TC: O(N*M)
//SC: O(1)
/*It's obvious that we must change all Rs in the last column and all Ds in the last row.
Otherwise, anything placed in those cells will move out of the grid.
We claim that doing just this is enough to make the grid functional. 
Indeed, for any other cell, any luggage placed in it will eventually reach either the last row or the last column, from which it will move to the counter.
*/
