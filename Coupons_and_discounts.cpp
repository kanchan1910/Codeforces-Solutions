#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int f=0;
for(int i=0;i<n-1;i++){
    if(arr[i]%2!=0){
        if(arr[i+1]==0){
            f=1;
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            arr[i+1]--;
        }
    }
}
if(f==0){
    if(arr[n-1]%2!=0){
         cout<<"NO"<<endl;
            return 0;
    }
}
cout<<"YES"<<endl;
}
