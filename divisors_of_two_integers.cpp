#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
multiset<int>s;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.insert(x);
}
int x=(*(s.rbegin()));
for(int i=1;i<=x;i++){
    if(x%i==0){
        s.erase(s.find(i));
    }
}
cout<<x<<" "<<(*(s.rbegin()))<<endl;
}
