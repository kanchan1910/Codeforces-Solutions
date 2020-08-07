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
   int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    stack<int>sz,so;
    int component=1;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            if(so.empty()){
                sz.push(component);
                arr[i]=component;
                component++;
            }
            else{
                int tt=so.top();
                so.pop();
                arr[i]=tt;
                sz.push(tt);
            }
        }
        else{
             if(sz.empty()){
                so.push(component);
                arr[i]=component;
                component++;
            }
            else{
                int tt=sz.top();
                sz.pop();
                arr[i]=tt;
                so.push(tt);
            }
        }
    }
    cout<<component-1<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
   cout<<endl;}
}
//TC: O(N)
//SC: O(N)

