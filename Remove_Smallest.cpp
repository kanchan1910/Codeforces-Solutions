#include<bits/stdc++.h>
//2D vector decalre in c++ also memset to -1
//vector<vector<int>>f((m+1),(vector<int>(n+1,-1)));
////#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pop pop_back
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
using namespace std;
lli no_of_divisors(lli n){ 
  lli count = 0; 
  for (lli i = 1; i <= sqrt(n); i++) { 
    if (n % i == 0){ 
    if(n/i==i)
      count=count+1;
    else
      count=count+2;
    }
  }
  return count; 
  } 
lli gcdExtended(lli a, lli b, lli *x, lli *y){
    if (a == 0){
        *x = 0, *y = 1;
        return b;
    }
    lli x1, y1;
    lli gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
lli modInv(lli a, lli m){
    lli x, y;
    lli g = gcdExtended(a, m, &x, &y);
    lli res = (x%m + m) % m;
    return res;
}
lli mpower(lli x, lli y, lli p){
    lli res = 1;
    x = x % p;
    while(y > 0){
        if(y & 1) res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

lli power(lli x, lli y){
    lli res = 1;
    while (y > 0){
        if (y & 1) res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}
/*bool vis[N];
vector<int>adj[N];
void dfs(int v){
vis[v]=true;
for(int child:adj[v]){
    if(vis[child]==false){
    dfs(child);
    }
}
void bfs(int v){
queue<int>q;
q.push(v);
vis[v]=true;
while(!q.empty()){
int top=q.front();
q.pop();
for(int child:adj[top]){
if(vis[child]==false){
q.push(child);
vis[child]=true;}
}}
}
*/
lli modfun(lli x){
        return ((x%mod + mod)%mod);
    }
lli addi(lli a,lli b){
        return modfun(modfun(a)+modfun(b));
    }
lli multi(lli a, lli b){
        return modfun(modfun(a)*modfun(b));
    }
bool isPrime(lli n){
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    lli p=sqrt(n);
    for(int i=5;i<=p;i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;
    return true;
}
bool isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return true;
    }
    else{
        return false;
    }
}
bool is_upper(char ch){
    if(ch >= 'A'&&ch <= 'Z')
    {
        return true;
    }
    else{
      return false;   
    }
}
bool is_lower(char c){
    if(c >= 'a'&&c <= 'z') 
    {
        return true;
    }
    else 
    {
        return false;
    }
}
lli countCubes(lli a, lli b) 
{ //count of numbers that are perfecr cubes
    return (floor(cbrt(b)) - ceil(cbrt(a)) + 1); 
} 
lli countSquares(lli a,lli b) 
{ //count of numbers that are perfect squares
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1); 
} 
lli SquareCube(lli n) 
{ 
  //count of numbers that are both perfect square and perfect cubes
    lli cnt = 0, i = 1; 
  
    while (int(pow(i, 6)) <= n) { 
        ++cnt; 
        ++i; 
    } 
  
    return cnt; 
}
lli countSC(lli n) //it is the combine function of above three functions
{ 
    lli res = (lli)sqrt(n) + (lli)cbrt(n) 
              - (lli)(sqrt(cbrt(n))); 
  
    return res; 
}
lli gcd_fun(lli a, lli b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

lli lcm_of_array(lli arr[], lli n) 
{ 
    lli ans = arr[0]; 
    for (int i = 1; i < n; i++) 
        ans = lcm(arr[i],ans);
    return ans; 
} 
//Function returns 1 if set, 0 if not 
bool LSB(int num, int K) 
{ 
    return (num & (1 << (K-1))); 
} 
//Least significant digit is rightmost,and most significant bit is leftmost bit
//to multiply two numbers with handling mod
lli mul(lli a,lli b){
 return (((a+mod)%mod)*((b+mod)%mod))%mod;
}
//to add two numbers with handling mod
lli add(lli a,lli b){
 return (((a+mod)%mod)+((b+mod)%mod))%mod;
}

int main()
{
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
    sort(arr,arr+n);
    int flag=0;
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])>1){
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}