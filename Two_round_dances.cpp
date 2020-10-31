//codeforces round 677 div3
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli fact(lli n){
 return (n == 1 || n == 0) ? 1 : n * fact(n - 1); 
}
int main(){
lli n;
cin>>n;
lli r=n/2;
cout<<((((fact(n/2-1)*fact(n/2-1)))*(fact(n)/(fact(n-r)*fact(r))))/2);
}
//nc(n/2) to find combination
//(n-1)! here (n/2-1)! for arranging in circle and for 1 element in round 1 arrangement for round 2 is (n/2-1)!
//as (1,3) (2,4)
//is same as (2,4) (1,3)
//so divide by 2
/*Firstly, we need to choose the set of n/2 people to be in the first round dance (the other half is going to the second one). The number of ways to do that is (nn/2). Then we need to set some order of people in both round dances, but we don't want to forget about rotation (because rotation can lead us to counting the same ways several times). So, the number of ways to arrange people inside one round dance is (n/2−1)!. This is true because we just "fixed" who will be the first in the round dance, and place others in every possible order. So, we need to multiply our initial answer by this value twice because we have two round dances. And, finally, we have to divide our answer by 2 because we counted "ordered" pairs (i.e. we distinguish pairs of kind (x,y) and (y,x) but we don't have to do that). So, the final answer is (nn/2)⋅(n/2−1)!⋅(n/2−1)! divided by 2.*/
