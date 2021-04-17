#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define endl '\n'

int main(){
   string str;
   cin>>str;
   int a=0;
   for(int i=0;i<str.length();i++){
       if(str[i]=='a')
       a++;
   }
   int n=str.length();
  if(2*a>n){
      cout<<n<<endl;
      return 0;
  }
  cout<<(2*a-1)<<endl;
}
