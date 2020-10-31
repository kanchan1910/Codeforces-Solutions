#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%4!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int even=2;
        for(int i=0;i<n/2;i++){
            cout<<even<<" ";
            even+=2;
        }
        int odd=1;
        for(int i=n/2;i<n;i++){
            if(i==n-1){
                cout<<(odd+n/2)<<endl;
            }
            else{
                cout<<odd<<" ";   
            }
            odd+=2;
        }
    }
}
}
