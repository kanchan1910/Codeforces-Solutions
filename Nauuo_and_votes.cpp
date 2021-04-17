#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
int up,down,un;
cin>>up>>down>>un;
if(up>down&&(un==0||(un+down)<up)){
    cout<<"+"<<endl;
    return 0;
}
if(down>up&&(un==0||(un+up)<down)){
    cout<<"-"<<endl;
    return 0;
}
if(un==0){
    cout<<0<<endl;
    return 0;
}
cout<<"?"<<endl;
}
