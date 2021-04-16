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
        
       lli sum=0;
       
       lli maxi=0,mini=0;
       
       for(int i=0;i<n;i++){
           
           sum+=arr[i];
           
           maxi+=ceil((arr[i]*1.0)/x);
           
       }
       
       mini=ceil((sum*1.0)/x);
        
       cout<<mini<<" "<<maxi<<endl;
    }
}
/* ⌈(a+b)/x⌉≤⌈a/x⌉+⌈b/x⌉. 
if a%x==0 && b%x==0 then above condition is lhs=rhs and if a%x!=0 && b%x!=0  then in above condition lhs<rhs
It means that the maximal sum is attained if we do not apply any operations, 
and the minimal one is attained if we replace all the element with a single one, 
equal to the sum of all elements.
*/
