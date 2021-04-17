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
        
        int sum=0;
        
        int o=0,tw=0;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]==2){
                
              tw++;
              
            }
            else{
                
                o++;
            }
            sum+=arr[i];
            
        }
    if(sum%2!=0){
        
        cout<<"NO"<<endl;
        
        continue;
        
    }   
    
    if(o%2!=0){
        
        cout<<"NO"<<endl;
        
        continue;
    }
    if(tw%2==0){
        
        cout<<"YES"<<endl;
        
        continue;
    }
    if(tw%2!=0){
        
        if(o>=2){
            
            cout<<"YES"<<endl;
            
            continue;
            
        }
        else{
            
            cout<<"NO"<<endl;
            
            continue;
            
        }
    }
    
    cout<<"NO"<<endl;
    }
}
