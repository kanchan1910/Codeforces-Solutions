#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int brr[n];
for(int i=0;i<n;i++){
    cin>>brr[i];
}
multiset<int>s;
for(int i=0;i<n;i++){
    s.insert(brr[i]);
}
for(int i=0;i<n;i++){
    auto itr=s.lower_bound(n-arr[i]);
    if(itr==s.end()){
        itr=s.begin();
    }
    cout<<(arr[i]+*itr)%n<<" ";
    s.erase(itr);
}
cout<<endl;
}
/*Let's maintain all elements of the array b in a set
that allows multiple copies of equal elements (std::multiset for C++). 
Then let's iterate from left to right over the array a and try to minimize 
the current element in array c. This order will minimize the resulting array
by lexicographical comparing definition. So for the i-th element ai let's 
find the minimum element greater than or equal to n−ai in the set because
n−ai will give us remainder 0, n−ai+1 will give us remainder 1 and so on.
If there is no greater or equal element in the set then let's take the 
minimum element of the set and take it as a pair for ai otherwise let's 
take this greater or equal element and remove it from the set.

Time complexity: O(nlogn).

*/
