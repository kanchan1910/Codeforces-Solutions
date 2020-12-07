#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(abs(x-y)<2){
            cout<<x+y<<endl;
        }
        else{
            cout<<(2*max(x,y)-1)<<endl;
        }
    }
}
