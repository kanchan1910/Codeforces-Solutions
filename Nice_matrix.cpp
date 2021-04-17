#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
lli ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int other1=arr[i][m-j-1];
        int other2=arr[n-i-1][j];
        vector<int>tmp;
        tmp.push_back(arr[i][j]);
        tmp.push_back(other1);
        tmp.push_back(other2);
        sort(tmp.begin(),tmp.end());
        arr[i][j]=tmp[1];
        arr[i][m-j-1]=tmp[1];
        arr[n-i-1][j]=tmp[1];
        ans+=((tmp[1]-tmp[0])+(tmp[2]-tmp[1]));
    }
}
cout<<ans<<endl;
    }
}
