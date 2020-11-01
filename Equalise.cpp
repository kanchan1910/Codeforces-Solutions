#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int 
#define endl '\n'
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define p_q priority_queue
#define fi first1
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
    string a,b;
    cin>>a;
    cin>>b;
    int cost=0;
    int i=0;
    while(i<n){
    if(a[i]!=b[i]){
        if(i+1<n&&a[i+1]!=b[i+1]&&a[i]!=a[i+1])
        {
            cost++;
            i+=2;
        }
        else{
            cost++;
            i++;
        }
    }
    else{
        i++;
    }
    }
    cout<<cost<<endl;
}
