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
unordered_set<int>s;
for(int i=0;i<n;i++){
   s.insert(arr[i]);
}
if(s.size()==1){
    cout<<"NO"<<endl;
}
else{
    vector<int>temp;
    cout<<"YES"<<endl;
    int val=arr[0];
    int index=-1;
    for(int i=1;i<n;i++){
        if(arr[i]==val){
            temp.push_back(i+1);
        }
        else{
            index=i+1;
            cout<<1<<" "<<(i+1)<<endl;
        }
    }
    for(int i=0;i<temp.size();i++){
        cout<<(index)<<" "<<temp[i]<<endl;
    }
}
}
}
