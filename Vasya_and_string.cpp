#include<bits/stdc++.h>
using namespace std;
int n,k;
string str;
int fun(char ch){
    //ch is bad character
    int l=0,r=0,ans=0;
    int bad=0;
    while(r<n){
        if(str[r]==ch){
            bad++;
        }
        if(bad<=k){
            ans=max(ans,r-l+1);
        }
        else if(bad>k){
            while(bad>k){
                if(str[l]==ch){
                    bad--;
                }
                l++;
            }
        }
        r++;
    }
    return ans;
}
int main(){
cin>>n>>k;
cin>>str;
cout<<max(fun('a'),fun('b'))<<endl;
}
