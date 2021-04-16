#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
    int x;
    cin>>x;
    if(x<10){
        cout<<x<<endl;
        continue;
    }
    if(x>45){
        cout<<-1<<endl;
        continue;
    }
    int sum=0;
    int num=9;
     string ans="";
    while(num>0&&sum<x){
        int val=(min(num,x-sum));
        ans+=(val+'0');
        sum+=num;
        num--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    }
}
