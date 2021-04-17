#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
int lower=0,upper=0;
int n=str.length();
for(int i=0;i<n;i++){
    if(islower(str[i]))
    lower++;
    else
    upper++;
}
if(lower==n||upper==n){
    cout<<0<<endl;
}
else{
    int left[n], right[n];
    //how many small letters in my left
    left[0]=0;
    for(int i=1;i<n;i++)
    {
        left[i]=left[i-1];
        if(str[i-1]>='a' && str[i-1]<='z' )
            left[i]++;
    }
    //how many capital letters in my right
    right[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        right[i]=right[i+1];
        if(str[i+1]>='A' && str[i+1]<='Z')
            right[i]++;
    }

    int ans=n;
    for(int i=0;i<n;i++)
    {
        //let ith be the point where capital|small occurs
        ans=min(ans,right[i]+left[i]);
    }
    cout<<ans<<endl;
}
}
