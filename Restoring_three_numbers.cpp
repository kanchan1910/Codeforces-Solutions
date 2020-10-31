#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define endl '\n'

int main(){
int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
}
sort(arr,arr+4);
int c=(arr[3]-arr[0]);
int b=(arr[2]-c);
int a=(arr[1]-c);
cout<<a<<" "<<b<<" "<<c<<endl;
return 0;
}
