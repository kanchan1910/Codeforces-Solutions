// 11 jan 2021

#include<bits/stdc++.h>
using namespace std;
#define lli long long int  

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        
        int n;
        
        cin>>n;
        
        int arr[n];
        
        for(int i=0;i<n;i++){
            
            cin>>arr[i];
            
        }
        
        int dp[n];
        
        int ans=0;
        
        for(int i=n-1;i>=0;i--){
            
            dp[i]=arr[i];
            
            if(i+arr[i]<n){
                
                dp[i]+=dp[i+arr[i]];
                
            }
        }
        
        for(int i=0;i<n;i++){
            
            ans=max(ans,dp[i]);
            
        }
        
        cout<<ans<<endl;
        
    }
}
