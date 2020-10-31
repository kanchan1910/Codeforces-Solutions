#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n+1,1);
    for(int i=1;i<=n;i++){
        for(int j=2*i;j<=n;j+=i){
            if(arr[i]<arr[j])
            dp[j]=max(dp[j],dp[i]+1);
        }
    }
    cout<<(*max_element(dp.begin(),dp.end()))<<endl;
}
}
