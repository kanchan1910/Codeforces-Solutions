#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
int main(){
lli n;
int k;
cin>>n>>k;
while(k--){
    if(n%10!=0){
        n-=1;
    }
    else{
        n/=10;
    }
}
cout<<n<<endl;
}
