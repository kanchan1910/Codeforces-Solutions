//"When your critics increase, it's a sign of success".
#include<bits/stdc++.h>
//2D vector decalre in c++ also memset to -1
//vector<vector<int>>f((m+1),(vector<int>(n+1,-1)));
////#include <boost/multiprecision/cpp_int.hpp>
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
#define rev(v) reverse(v.begin(),v.end())
#define pi 3.141592653589793238
#define u_b upper_bound
#define l_b lower_bound
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a*b/__gcd(a,b))
#define set_bits(x) __builtin_popcountll(x)
#define m_p make_pair
#define mem0(a) memset(a,0,sizeof(a))
#define mem1(a) memset(a,-1,sizeof(a))
#define memf(a) memset(a,false,sizeof(a))
// using lexicographical_compare for checking is "one" is less than "two" 
//bool lexicographical_compare(iter1 beg1, iter1 end1, iter2 beg2, iter2 end2)
using namespace std;

//main function here
int main(){
    boost;
  int t;
  cin>>t;
  while(t--){
      lli n,q;
      cin>>n>>q;
      lli arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int f=0;
      lli sum=0;
      for(int i=1;i<n;i++){
          if(f==0){//searching for peak
              if(arr[i]>arr[i-1]){
                  continue;
              }
              else{
                  sum+=arr[i-1];
                  f=1;
              }
          }
          else{//searching for valley
              if(arr[i]<arr[i-1]){
                  continue;
              }
              else{
                  sum-=arr[i-1];
                  f=0;
              }
          }
      }
      if(f==0){
          sum+=arr[n-1];
      }
    cout<<sum<<endl;  
  }
}
