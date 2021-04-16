// 11 jan 2021

#include<bits/stdc++.h>
using namespace std;
#define lli long long int  

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        
        lli n;
        
        cin>>n;
        
        lli arr[n];
        
        for(lli i=0;i<n;i++){
            
            cin>>arr[i];
            
        }
        
        sort(arr,arr+n,greater<lli>());
        
        lli alice=0,bob=0;
        
        for(lli i=0;i<n;i++){
            
            if(i%2==0){
                //alice turn
                if(arr[i]%2==0){
                    
                    alice+=arr[i];
                    
                }
            }
            else{
                //bob turn
                if(arr[i]%2!=0){
                    
                    bob+=arr[i];
                    
                }
            }
        }
        
        if(alice==bob){
            
            cout<<"Tie"<<endl;
            
        }
        else if(alice>bob){
            
            cout<<"Alice"<<endl;
            
        }
        else if(bob>alice){
            
            cout<<"Bob"<<endl;
            
        }
        
    }
}
