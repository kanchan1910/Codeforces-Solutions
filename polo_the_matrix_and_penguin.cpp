#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,d;
cin>>n>>m>>d;
int len=n*m;
int arr[len];
for(int i=1;i<=len;i++){
    cin>>arr[i];
}
int f=0;
for(int i=2;i<=len;++i){
    if((arr[i]%d)!=(arr[i-1]%d)){
        f=1;
        break;
    }
}
if(f==1){
    cout<<-1<<endl;
}
else{
    sort(arr+1,arr+len+1);
    int middle=arr[len/2+1];
    int ans=0;
    for(int i=1;i<=len;i++){
        ans+=abs(arr[i]-middle);
    }
    ans/=d;
    cout<<ans<<endl;
}
}
