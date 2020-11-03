#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
lli divisors(lli n){
    lli count=0;
    while(n%3==0){
        count++;
        n=n/3;
    }
    return count;
}
bool comp(lli a,lli b){
    if(divisors(a)==divisors(b))
    return a<b;
    return divisors(a)>divisors(b);
}
int main(){
lli n;
cin>>n;
lli arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n,comp);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
