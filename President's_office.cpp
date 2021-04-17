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
 int n,m;
 cin>>n>>m;
 char ch;
 cin>>ch;
 char arr[n][m];
unordered_set<char>s;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==ch){

            if(i-1>=0&&arr[i-1][j]!='.'&&arr[i-1][j]!=ch){
                s.insert(arr[i-1][j]);

            }
            if(i+1<n&&arr[i+1][j]!='.'&&arr[i+1][j]!=ch){
                s.insert(arr[i+1][j]);
               
            }
             if(j-1>=0&&arr[i][j-1]!='.'&&arr[i][j-1]!=ch){
                s.insert(arr[i][j-1]);
               
            }
             if(j+1<m&&arr[i][j+1]!='.'&&arr[i][j+1]!=ch){
                s.insert(arr[i][j+1]);
                
            }
        }
        
    }
}
cout<<s.size()<<endl;
}
