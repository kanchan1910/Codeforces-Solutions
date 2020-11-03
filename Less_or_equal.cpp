#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
int main(){
lli n,k;
cin>>n>>k;
lli arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
if(k==0){//base case 
//k can be zero
if(arr[0]-1>0)
    cout<<(arr[0]-1)<<endl;
else
///range of x is from 1  to 10^9
    cout<<-1<<endl;
}
else if(k==n){
    //base case k==n because here this comparision arr[k]>arr[k-1] will give index out of bound error
    cout<<arr[n-1]<<endl;
}
else{

 if(arr[k]>arr[k-1]){
    cout<<arr[k-1]<<endl;
}
else{
    cout<<-1<<endl;
}   
}
}
