#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int odd=0;
int even=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0)
    even++;
    else
    odd++;
}
//no odd
if(odd==0){
    cout<<"No"<<endl;
    continue;
}
//x odd
if(x%2!=0){
    //can take odd times odd numbers which will givw odd sum
    if(odd>=x){
        cout<<"Yes"<<endl;
        continue;
    }
    else{
        //odd<x
        if(odd%2==0){
            odd--;
        }
        //if(odd%2!=0)
        //then simply can take all
        //till now sum is odd o if odd+even is done will give odd only
    if(even>=(x-odd)){
        cout<<"Yes"<<endl;
        continue;
    }
    else{
        cout<<"No"<<endl;
        continue;
    }
    //is even able to fulfiil remaining
    }
}
else{
    //if(x is even)
    //need atleast 1 even so that odd till x-1 and even at x will give overall odd sum
    if(even==0){
        cout<<"No"<<endl;
        continue;
    }
    //as we cant take all x odd as odd taken even times will give sum as even so the above step is necessary
    //now we ahve atleast 1 even
    x--;
    even--;
    //now x is odd as all the same as above
     //can take odd times odd numbers which will givw odd sum
    if(odd>=x){
        cout<<"Yes"<<endl;
        continue;
    }
    else{
        //odd<x
        if(odd%2==0){
            odd--;
        }
        //if(odd%2!=0)
        //then simply can take all
        //till now sum is odd o if odd+even is done will give odd only
    if(even>=(x-odd)){
        cout<<"Yes"<<endl;
        continue;
    }
    else{
        cout<<"No"<<endl;
        continue;
    }
    //is even able to fulfiil remaining
    }
}
    }
}
