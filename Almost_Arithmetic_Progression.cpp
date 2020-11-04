#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
int n;
int arr[100005],brr[100005];
int fun(int ans){
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    int val=brr[1]-brr[0];
    for(int i=2;i<n;i++){
        if((brr[i]-brr[i-1])==val){
            continue;
        }
        if((brr[i]-1-brr[i-1])==val){
            ans++;
            brr[i]--;
            continue;
        }
        if((brr[i]+1-brr[i-1])==val){
            brr[i]++;
            ans++;
            continue;
        }
        return INT_MAX;
    }
    return ans;
}
int main(){
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
if(n<=2){
    cout<<0<<endl;
}
else{
int res=fun(0);

arr[0]++;
res=min(res,fun(1));
arr[0]--;

arr[1]++;
res=min(res,fun(1));
arr[1]--;

arr[0]--;
res=min(res,fun(1));
arr[0]++;

arr[1]--;
res=min(res,fun(1));
arr[1]++;

arr[0]++;
arr[1]++;
res=min(res,fun(2));
arr[0]--;
arr[1]--;

arr[0]--;
arr[1]--;
res=min(res,fun(2));
arr[0]++;
arr[1]++;

arr[0]++;
arr[1]--;
res=min(res,fun(2));
arr[0]--;
arr[1]++;

arr[0]--;
arr[1]++;
res=min(res,fun(2));
arr[0]++;
arr[1]--;

if(res==INT_MAX)
{
    cout<<-1<<endl;
}
else{
 cout<<res<<endl;   
}}
}
