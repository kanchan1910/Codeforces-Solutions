#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
lli n;
cin>>n;
unordered_set<lli>s;
while(s.find(n)==s.end()){
    s.insert(n);
    n++;
    while(n%10==0){
        n/=10;
    }
}
cout<<(s.size())<<endl;
}
