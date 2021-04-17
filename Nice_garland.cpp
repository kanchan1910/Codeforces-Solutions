#include<bits/stdc++.h>
using namespace std;
char arr[10][10]={
    "RGB",
    "RBG",
    "GBR",
    "GRB",
    "BRG",
    "BGR"
};
int main(){
int n;
cin>>n;
string str;
cin>>str;
int index=-1;
int ans=INT_MAX;
for(int i=0;i<6;i++){
    int count=0;
    for(int j=0;j<n;j++){
        if(str[j]!=arr[i][j%3]){
            count++;
        }
    }
    if(ans>count){
        ans=count;
        index=i;
    }
}
cout<<ans<<endl;
for(int i=0;i<n;i++){
    cout<<arr[index][i%3];
}
}
