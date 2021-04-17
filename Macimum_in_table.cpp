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
int n;
cin>>n;
if(n==1){
    cout<<1<<endl;
    return 0;
}
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0||j==0){
            arr[i][j]=1;
        }
        else{
            arr[i][j]=(arr[i][j-1]+arr[i-1][j]);
        }
    }
}
cout<<(arr[n-1][n-1])<<endl;
}
