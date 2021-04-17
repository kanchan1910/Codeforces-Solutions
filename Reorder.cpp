#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
/*You can notice that the i-th number in the array will be
included in the sum i times, which means that the value aii will ad
d ai to the sum. That is, the permutation of the elements does not affect the
required sum, and therefore it is enough to check whether the sum of the array
elements is equal to the given number*/
