#include<bits/stdc++.h>
using namespace std;
int main(){
int m,s;
cin>>m>>s;
if(s==0){
    if(m==1){
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    else{
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
}
string maxi="";
string mini="";
for(int i=0;i<m;i++){
    maxi+=(to_string(min(9,s)));
    s-=min(9,s);
}
if(s>0){
    cout<<-1<<" "<<-1<<endl;
    return 0;
}
mini=maxi;
reverse(mini.begin(),mini.end());
int j=0;
while(mini[j]=='0'){
    j++;
}
mini[j]--;
mini[0]++;
cout<<mini<<" "<<maxi<<endl;
return 0;
}
