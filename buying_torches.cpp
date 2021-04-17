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
 /*The key idea (int l r k type queries like find count of elements greater than k in a given range l to r)is to build a Segment Tree with a vector at every node and the vector contains all the elements of the subrange in a sorted order . And if you observe this segment tree structure this is some what similar to the tree formed during the merge sort algorithm ( Yes , thats why they are called Merge Sort Trees ) .*/
/* FENWICK TREE BASICS
void update(lli index,lli val,lli n,lli bitarr[]){
    index=index+1;
    while(index<=n){
        bitarr[index]+=val;
        index+=(index&(-index));
    }
}
lli sum(lli index,lli n,lli bitarr[]){
    index=index+1;
    lli s=0;
    while(index>0){
        s+=bitarr[index];
        index-=(index&(-index));
    }
    return s;
}
lli *build(lli arr[],lli n){
    lli *bitarr=new lli[n+1];
    for(int i=1;i<=n;i++){
        bitarr[i]=0;
    }
    for(int i=0;i<n;i++){
        update(i,arr[i],n,bitarr);
    }
    return bitarr;
}*/
/*Segment tree / Merge sort tree. You don't want to go down the tree. Because at the bottom of the tree there are n nodes. And you want to answer queries in less than O(n) time. By using the condition x <= l && r <= y you are guaranteed that you only have to visit  nodes, that still contain the same information as the O(n) nodes at the bottom.*/
/*segment tree basic
void build(int *tree,int *arr,int index,int s,int e){
    //base case 
    if(s>e){
        return;
    }
    //easy to start filling the nodes from leaf nodes
    if(s==e){
        tree[index]=arr[s];
        return;
    }
    //recursive call to build both left and right subtree
    build(tree,arr,2*index,s,mid);
    build(tree,arr,2*index+1,mid+1,e);
    int left=tree[2*index];
    int right=tree[2*index+1];
    tree[index]=min(left,right);
}
int query(int *tree,int index,int s,int e,int qs,int qe){
    //no overlap
    if(qs>e||qe<s){
        return INT_MAX;
    }
    //complete overlap
    if(s>=qs&&e<=qe){
        return tree[index];
    }
    //partial overlap-call both sides
    int mid=(s+e)/2;
    int left=query(tree,2*index,s,mid,qs,qe);
    int right=query(tree,2*index,mid+1,e,qs,qe);
    return min(left,right);
}
void updatenode(int *tree,int index,int s,int e,int i,int val){
    //no overlap
    if(i>e||i<s){
        return;
    }
    //reached leaf nodes
    if(s==e){
        tree[index]=val;
        return;
    }
    //lying in range-call both sides
    int mid=(s+e)/2;
    updatenode(tree,2*index,s,mid,i,val);
    updatenode(tree,2*index+1,mid+1,e,i,val);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
} 
void upadterange(int *tree,int index,int s,int e,int rs,int re,int inc){
    //no overlap
    if(rs>e||re<s){
        return;
    }
    //reached leaf nodes
    if(s==e){
        tree[index]+=inc;
        return;
    }
    //lying in the range-call both sides
    int mid=(s+e)/2;
    upadterange(tree,2*index,s,mid,rs,re,inc);
    updatenode(tree,2*index+1,mid+1,e,rs,re,inc);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
}*/
/*lazy propogation basics
void build(int *tree,int *arr,int index,int s,int e){    //this function is same as before as segment tree will build by this function and
lazy tree have initiallly all nodes 0 ,all by default when it is initiallly they are 0 so,no need to build it
    //base case 
    if(s>e){
        return;
    }
    //easy to start filling the nodes from leaf nodes
    if(s==e){
        tree[index]=arr[s];
        return;
    }
    //recursive call to build both left and right subtree
    build(tree,arr,2*index,s,mid);
    build(tree,arr,2*index+1,mid+1,e);
    int left=tree[2*index];
    int right=tree[2*index+1];
    tree[index]=min(left,right);
}
int query(int *tree,int *lazy,int index,int s,int e,int qs,int qe){
//means check if lazy update remaining
    if(lazy[index]!=0){
        int dx=(lazy[index]);
        lazy[index]=0;
        tree[index]+=(e-s+1)*dx;
        if(s!=e)//means not a leaf node,which means that it ahve 2 child ,means therre we ahve to store in lazy tree
        {
            lazy[2*index]+=dx;
            lazy[2*index+1]+=dx;
        }
    }
    //remaining code is same as before
    //no overlap
    if(qs>e||qe<s){
        return INT_MAX;
    }
    //complete overlap
    if(s>=qs&&e<=qe){
        return tree[index];
    }
    //partial overlap-call both sides
    int mid=(s+e)/2;
    int left=query(tree,2*index,s,mid,qs,qe);
    int right=query(tree,2*index,mid+1,e,qs,qe);
    return (left+right);
}
void upadterange(int *tree,int *lazy,int index,int s,int e,int rs,int re,int inc){
//means check if lazy update remaining
 if(lazy[index]!=0){
        int dx=(lazy[index]);
        lazy[index]=0;
        tree[index]+=(e-s+1)*dx;
        if(s!=e)//means not a leaf node,which means that it ahve 2 child ,means therre we ahve to store in lazy tree
        {
            lazy[2*index]+=dx;
            lazy[2*index+1]+=dx;
        }
    }
    //no overlap
    if(rs>e||re<s){
        return;
    }
    
   //complete overlap
   if(s>=rs&&e<=re){
       int dx=(e-s+1)*val;
       tree[index]+=dx;
       if(s!=e){
           lazy[2*index]+=val;
           lazy[2*index+1]+=val;
       }
       return;
   }
    //lying in the range-call both sides
    int mid=(s+e)/2;
    upadterange(tree,2*index,s,mid,rs,re,inc);
    updatenode(tree,2*index+1,mid+1,e,rs,re,inc);
    tree[index]=(tree[2*index]+tree[2*index+1]);
    return;
}*/
/*int arr[30005];
vector<int>tree[120020];
void merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int i=0;
    int j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
       c.push_back(a[i]);
            i++; 
    }
    while(j<b.size()){
         c.push_back(b[j]);
            j++;
    }
}
void build(int index,int s,int e){
    if(s>e){
        return;
    }
    if(s==e){
        tree[index].push_back(arr[s]);
        return;
    }
    int mid=(s+e)/2;
    build(2*index,s,mid);
    build(2*index+1,mid+1,e);
    merge(tree[2*index],tree[2*index+1],tree[index]);
    return;
}
int query(int index,int s,int e,int qs,int qe,int k){
    if(s>qe||e<qs){
        return 0;
    }
    if(s>=qs&&e<=qe){
        return tree[index].end()-(upper_bound(tree[index].begin(),tree[index].end(),k));
    }
     int mid=(s+e)/2;
    int l=query(2*index,s,mid,qs,qe,k);
    int r=query(2*index+1,mid+1,e,qs,qe,k);
    return (l+r);
}merge sort tree basics for thr similar problems like find number of elements greater than k in range l to r*/
//Least significant digit is rightmost,and most significant bit is leftmost bit
//to multiply two numbers with handling mod
lli mul(lli a,lli b){
 return (((a+mod)%mod)*((b+mod)%mod))%mod;
}
//to add two numbers with handling mod
lli add(lli a,lli b){
 return (((a+mod)%mod)+((b+mod)%mod))%mod;
}
//main function here
int main(){
    boost;
   int t;
    cin>>t;
    while(t--){
    lli x,y,k;
    cin>>x>>y>>k;
    lli sticks=(k*y+k-1);
    lli trades=(sticks)/(x-1);
    if((sticks%(x-1))!=0){
        trades++;
    }
    cout<<(trades+k)<<endl;
    }
   
}
/*Since the second trade is the only way to get coal, 
we clearly need to perform the second trade k times. 
So how many times do we need to do the first trade?
We can see that in order to end up with enough sticks and coal by the end,
we need to obtain ky+k sticks (ky to convert to coal and k to save as sticks). 
Since the first trade really just gives us x−1 new sticks each time
we'll need to make ⌈ky+k−1x−1⌉ first trades*/
