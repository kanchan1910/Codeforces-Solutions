#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

bool comp(pair<int,int>&a,pair<int,int>&b){
    return a.first>b.first;
}
int main(){
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
int train,read;
cin>>train>>read;
int t[train];
for(int i=0;i<train;i++){
    cin>>t[i];
}
vector<pair<int,int>>temp;
for(int i=0;i<train;i++){
  temp.pb({t[i],i+1});  
}
sort(temp.begin(),temp.end(),comp);
cout<<(temp[read-1].first)<<endl;
for(int i=0;i<read;i++){
    cout<<(temp[i].second)<<" ";
}
}
