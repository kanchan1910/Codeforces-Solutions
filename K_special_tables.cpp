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
int n,k;scanf("%d",&n);
scanf("%d",&k);
int val=1;
int arr[510][510];
for(int i=1;i<=n;i++){
    for(int j=1;j<=k-1;j++){
        arr[i][j]=val;
        val++;
    }
}
for(int i=1;i<=n;i++){
    for(int j=k;j<=n;j++){
        arr[i][j]=val;
        val++;
    }
}
lli sum=0;
for(int i=1;i<=n;i++){
    sum+=arr[i][k];
}
printf("%d",sum);
printf("\n");
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d",arr[i][j]);
        printf(" ");
    }
    printf("\n");
}
}
