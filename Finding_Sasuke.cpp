#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
 
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i<n/2){
            cout<<(-arr[i])<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
}
