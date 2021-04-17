#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli val=sqrt(n);/*number upto which incrementing and then creating copies of it 
    will prove to be optimum*/
        lli increment_moves=(val-1);
        lli copy_moves=0;
        if((n-val)%val==0){
            copy_moves=(n-val)/val;
        }
        else{
            copy_moves=(n-val)/val+1;
        }
        cout<<(increment_moves+copy_moves)<<endl;
    }
}
/*always first increment operation will occur and then copying::::Think greedily*/
