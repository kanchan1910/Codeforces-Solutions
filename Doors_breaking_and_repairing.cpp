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
int n,x,y;
cin>>n>>x>>y;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(y<x){
    cout<<n<<endl;
}
else{
    int c=0;
    //x<=y
    for(int i=0;i<n;i++){
        if(arr[i]<=x)
        c++;
    }
    cout<<ceil(c/2.0)<<endl;
}
}
