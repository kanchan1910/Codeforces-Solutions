// 11 jan 2021

#include<bits/stdc++.h>
using namespace std;
#define lli long long int  

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        
        int w,h,n;
        
        cin>>w>>h>>n;
        
        if(w%2!=0 && h%2!=0){
            
            if(n==1){
                
                cout<<"YES"<<endl;
                
                continue;
                
            }
            else{
                
                cout<<"NO"<<endl;
                
                continue;
            }
        }
        lli ans1=1,ans2=1;
        
        while(w!=1){
            
            w/=2;
            
            ans1*=2;
            
        }
        
        while(h!=1){
            
            h/=2;
            
            ans2*=2;
        }
        if(ans1*ans2>=n){
            
            cout<<"YES"<<endl;
            
        }
        else{
            
            cout<<"NO"<<endl;
            
        }
    }
}
