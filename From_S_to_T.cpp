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
bool issubsequence(string str1,string str2,int n1,int n2){
    if(n1==0){
        return true;
    }
    if(n2==0){
        return false;
    }
    if(str1[n1-1]==str2[n2-1]){
        return issubsequence(str1,str2,n1-1,n2-1);
    }
    else{
        return issubsequence(str1,str2,n1,n2-1);
    }
}

int main(){
int t;
cin>>t;
while(t--){
    string s,t,p;
    cin>>s;
    cin>>t;
    cin>>p;
    if(issubsequence(s,t,s.length(),t.length())==false){
        cout<<"NO"<<endl;
    }
    else{
         unordered_map<char,int>m,mm;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for(int i=0;i<p.length();i++){
        m[p[i]]++;
    }
    for(int i=0;i<t.length();i++){
        mm[t[i]]++;
    }
    int f=0;
    for(int i=0;i<t.length();i++){
        if(m[t[i]]<mm[t[i]]){
            cout<<"NO"<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"YES"<<endl;
     m.clear();
     mm.clear();
    }
}
}
