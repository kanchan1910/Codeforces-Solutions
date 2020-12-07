#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
int t;
cin>>t;
while(t--){
lli n,k;
cin>>n>>k;
lli arr[n][2];
for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    }
}
lli c=0;
bool f=false;
for(int i=0;i<n;i++){
    c=0;
    for(int j=0;j<n;j++){
        if((abs(arr[i][0]-arr[j][0])+abs(arr[i][1]-arr[j][1]))>k){
            break;
        }
            c++;
    }
    if(c==n){
        f=true;
        break;
    }
}
if(f){
    cout<<1<<endl;
}
else{
    cout<<-1<<endl;
}
}
}
