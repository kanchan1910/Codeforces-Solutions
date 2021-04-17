#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int val=arr[0];
        lli ans=0;
        for(int i=1;i<n;i++){
            ans+=(k-arr[i])/val;
        }
        cout<<ans<<endl;
    }
}
