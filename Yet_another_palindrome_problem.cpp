#include<bits/stdc++.h>
using namespace std;
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
int f=0;
for(int i=0;i<n-2;i++){
    for(int j=i+2;j<n;j++){
        if(arr[i]==arr[j]){
            f=1;
            break;
        }
    }
}
if(f==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    }
}
