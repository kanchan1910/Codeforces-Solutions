//codeforces round 677 div3
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int fun(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
int main(){
int t;
cin>>t;
while(t--){
int n;
    cin>>n;
   int ans=0;
   int number_of_digits=fun(n);
   for(int i=1;i<=number_of_digits;i++){
       ans+=i;
   }
   int typo=n%10;
   ans+=(typo-1)*10;
   cout<<ans<<endl;
}
}

/*int main(){
int t;
cin>>t;
while(t--){
string str;
cin>>str;
int typo=str[0]-'0';
int ans=0;
int len=str.length();
ans+=(typo-1)*10+(len*(len+1))/2;
cout<<ans<<endl;
}
}
//O(1) solution*/
