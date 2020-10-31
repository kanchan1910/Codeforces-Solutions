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
      lli n;
      cin>>n;
      lli arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
    lli temp[33]={0};
    for(int i=0;i<n;i++){
        lli x=arr[i];
        lli c=0;
        while(x>0){
            x=x/2;
            c++;
        }
        temp[c]++;
    }
    lli ans=0;
    for(int i=0;i<=32;i++){
        if(temp[i]>=2){
            ans+=((temp[i]*(temp[i]-1))/2);
        }
    }
    cout<<ans<<endl;
  }
}
/*brute force sol will obviously give tle,so we have to think in same manner by observing bits*/
