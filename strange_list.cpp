// 12 jan 2021

#include<bits/stdc++.h>
using namespace std;
#define lli long long int  

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        
        lli n,x;
        
        cin>>n>>x;
        
        lli arr[n];
        
        for(lli i=0;i<n;i++){
            
            cin>>arr[i];
            
        }
        
       unordered_map<lli,lli>m;
       
       for(lli i=0;i<n;i++){
           
           m[arr[i]]++;
           
       }
       
       lli count=1;
       
       for(lli i=0;i<n;i++){
           
           if(arr[i]%x==0){
               
               arr[i]/=x;
               
               m[arr[i]]+=count*x;
               
               if(i==n-1){
                   
                   i=-1;
                   
                   count*=x;
               }
           }
           else{
               
               break;
               
           }
       }
       
       lli sum=0;
       
       for(auto p:m){
           
           sum+=p.second*p.first;
           
       }
       
       cout<<sum<<endl;
       
    }
}
