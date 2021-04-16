#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin >> t;
while(t--){
   string str1, str2;
   cin >> str1 >> str2;
   if(str1 == str2){
       cout << str1 << endl;
       continue;
   }
   int n1 = str1.length();
   int n2 = str2.length();
   int lcm = (n1 * n2)/(__gcd(n1, n2));
   string ans;
   if(n1 < n2){
       while(lcm > 0){
           ans += str1;
           lcm -= n1;
       }
       int f = 0;
       for(int i = 0 ;i < ans.length();){
           if(ans.substr(i, n2) != str2){
               f = 1;
               break;
           }
           i += n2;
       }
       if(f == 1){
           cout << -1 << endl;
       }
       else{
           cout << ans << endl;
       }
   }
   else{
       while(lcm > 0){
           ans += str2;
           lcm -= n2;
       }
       int f = 0;
       for(int i = 0 ;i < ans.length();){
           if(ans.substr(i, n1) != str1){
               f = 1;
               break;
           }
           i += n1;
       }
       if(f == 1){
           cout << -1 << endl;
       }
       else{
           cout << ans << endl;
       }
   }
}
}
