#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
int n,k;
cin>>n>>k;
vector<int>factor;
for(int i=2;i<=sqrt(n);i++){
    while(n%i==0){
        factor.push_back(i);
        n=n/i;
    }
}
//ye prime wala case
if(n>=2){
    factor.push_back(n);
}
if(factor.size()<k){
    cout<<-1<<endl;
    return 0;
}
for(int i=0;i<k-1;i++){
    cout<<factor[i]<<" ";
}
long long int last=1;
for(int i=k-1;i<factor.size();i++){
    last*=factor[i];
}
cout<<last<<endl;
return 0;
}
