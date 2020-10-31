#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        lli a,b;
        cin>>a>>b;
        lli x=(a&b);
        cout<<((a^x)+(b^x))<<endl;
    }
}
/* Let's take i'th digit from both numbers (in binary). 1. 
If both of them are 1, then for x we put there 1 as well.
This way we'll make that digit become 0 in our answer. 2. If one of them is 1, 
then no matter what we put there at x, that place in the answer will be 1. 3.
If none of them is 1, then we need to put 0 there at x, that place in the answer will
be 0. From these approaches, you can see that if digits in respective places are same,
then that digit will be 0 in our answer, otherwise, it will be 1. 
And this is what XOR does indeed.*/
