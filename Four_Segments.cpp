#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
    int arr[5];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    cout<<(arr[0]*arr[2])<<endl;
    }
}
