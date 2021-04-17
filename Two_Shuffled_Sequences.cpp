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

int main(){
    boost;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
unordered_map<int,int>m;
for(int i=0;i<n;i++){
    m[arr[i]]++;
}
int f=0;
int ff=0;
for(auto x:m){
    if(x.second>2){
        f=1;
        break;
    }
    else{
        if(x.second==2){
            ff=1;
        }
    }
}
if(f==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    if(ff==0){
        sort(arr,arr+n);
        cout<<1<<endl;
        cout<<arr[0]<<endl;
        cout<<(n-1)<<endl;
        for(int i=n-1;i>=1;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        vector<int>temp;
        for(auto x:m){
            if(x.second==2){
                temp.push_back(x.first);
            }
        }
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        sort(temp.begin(),temp.end(),greater<int>());
        cout<<(s.size())<<endl;
        for(auto x:s){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<temp.size()<<endl;
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }

}
}
