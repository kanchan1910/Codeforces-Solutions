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
    int index1=-1,index2=-1;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])>=2){
            index1=i+1;
            index2=i+2;
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"YES"<<endl;
        cout<<index1<<" "<<index2<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
