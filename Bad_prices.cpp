#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define endl '\n'

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
    int right[n];
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=min(arr[i],right[i+1]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(right[i]<arr[i]){
            c++;
        }
    }
    cout<<c<<endl;
}
}
