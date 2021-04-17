#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define p_q priority_queue
#define fi first
#define se second
#define ub upper_bound
#define lb lower_bound
#define maxi max_element
#define mini min_element
using namespace std;
bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return true;
    else
    return false;
}
int main(){
  string str;
  cin>>str;
  int ans=0;
  for(int i=0;i<str.length();i++){
      if((isvowel(str[i])==true)||(isdigit(str[i])&&(str[i]-'0')%2!=0))
      ans++;
  }
  cout<<ans<<endl;
}
