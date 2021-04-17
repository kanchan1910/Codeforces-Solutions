#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
//condition 1: sum max;
//condition 2 : sum odd
lli sum=0;
for(int i=0;i<n;i++){
    //sum of positive intergers
    //because it will give us max sum
    if(arr[i]>0)
    sum+=arr[i];
}
if(sum%2!=0){
    //sum odd,we get our answer
    cout<<sum<<endl;
    return 0;
}
//sum even hai use odd bnane ke lie usme se odd number subtract krna pdega
//hme sum ko max rkhna h islie min number substarct krenge
int min_pos_odd=INT_MAX;
int max_neg_odd=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        if(arr[i]>0){
            min_pos_odd=min(min_pos_odd,arr[i]);
        }
        else{
            max_neg_odd=max(max_neg_odd,arr[i]);
        }
    }
}
if(min_pos_odd!=INT_MAX&&max_neg_odd!=INT_MIN)
sum-=min(min_pos_odd,-max_neg_odd);
else if(min_pos_odd==INT_MAX)
sum-=(-max_neg_odd);
else
sum-=min_pos_odd;
cout<<sum<<endl;
return 0;
}
