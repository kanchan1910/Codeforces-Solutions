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
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int arr[2*n];
      for(int i=0;i<2*n;i++){
          cin>>arr[i];
      }
      vector<int>even,odd;
      for(int i=0;i<2*n;i++){
          if(arr[i]%2==0)
          even.pb(i+1);
          else
          odd.pb(i+1);
      }
      if(even.size()==0){
          odd.pop_back();
          odd.pop_back();
          for(int i=0;i<odd.size()-1;i+=2){
              cout<<odd[i]<<" "<<odd[i+1]<<endl;
          }
      }
      else if(odd.size()==0){
          even.pop_back();
          even.pop_back();
          for(int i=0;i<even.size()-1;i+=2){
              cout<<even[i]<<" "<<even[i+1]<<endl;
          } 
      }
      else if(odd.size()%2==0){
          odd.pop_back();
          odd.pop_back();
          if(odd.size()>=2){
             for(int i=0;i<odd.size()-1;i+=2){
              cout<<odd[i]<<" "<<odd[i+1]<<endl;
          }   
          }
        if(even.size()>=2){
                       for(int i=0;i<even.size()-1;i+=2){
              cout<<even[i]<<" "<<even[i+1]<<endl;
          }
        }

      }
      else{
           odd.pop_back();
          even.pop_back();
            if(odd.size()>=2){
             for(int i=0;i<odd.size()-1;i+=2){
              cout<<odd[i]<<" "<<odd[i+1]<<endl;
          }   
          }
        if(even.size()>=2){
                       for(int i=0;i<even.size()-1;i+=2){
              cout<<even[i]<<" "<<even[i+1]<<endl;
          }
        }
      }
  }
}
