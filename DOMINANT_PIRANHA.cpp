//codeforces round 677 div3
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
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
int f=0;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[0]){
        f=1;
        break;
    }
}
if(f==0){
    cout<<-1<<endl;
    continue;
}
int maxi=*max_element(arr.begin(),arr.end());
if(arr[0]==maxi){
    if(arr[0]>arr[1]){
      cout<<1<<endl;
    continue;   
    }
}
if(arr[n-1]==maxi){
    if(arr[n-1]>arr[n-2]){
    cout<<n<<endl;
    continue;   
    }
}
int ff=0;
for(int i=1;i<n-1;i++){
    if(arr[i]==maxi){
        if(arr[i]>arr[i+1]||arr[i]>arr[i-1]){
           cout<<(i+1)<<endl;
        ff=1;
        break;   
        }
    }
}
}
}
