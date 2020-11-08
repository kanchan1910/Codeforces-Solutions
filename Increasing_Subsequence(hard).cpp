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
int count=0;
string str="";
int l=0;
int r=n-1;
int val=0;
if(arr[l]<arr[r]){
    count++;
    str+="L";
    val=arr[l];
    l++;
}
else if(arr[r]<arr[l]){
    count++;
    str+="R";
    val=arr[r];
    r--;
}
while(l<=r){
    if(arr[l]==arr[r]){
        break;
    }
    else if(arr[l]>val&&arr[r]>val&&arr[l]!=arr[r]){
        if(arr[l]<=arr[r]){
            val=arr[l];
            str+="L";
            count++;
            l++;
        }
        else{
            val=arr[r];
            str+="R";
            count++;
            r--;
        }
    }
    else if(arr[l]>val){
        val=arr[l];
        count++;
        str+="L";
        l++;
    }
    else if(arr[r]>val){
        val=arr[r];
        count++;
        str+="R";
        r--;
    }
    else{
        break;
    }
}
//cout<<l<<" "<<r<<" "<<count<<" "<<val<<endl;
if(arr[l]==arr[r]){
    //case 1: choosing all from left side
    int ll=l;
    int rl=r;
    int vall=val;
    int countl=0;
    while(ll<=rl){
        if(arr[ll]>vall){
            countl++;
            vall=arr[ll];
            ll++;
        }
        else{
            break;
        }
    }
    //case 2: choosing all from right side
    int lr=l;
    int rr=r;
    int valr=val;
    int countr=0;
    while(rr>=lr){
        if(arr[rr]>valr){
            countr++;
            valr=arr[rr];
            rr--;
        }
        else{
            break;
        }
    }
    if(countl>countr){
        while(countl--){
            str+="L";
        }
    }
    else{
        while(countr--){
            str+="R";
        }
    }
}
cout<<str.length()<<endl;
cout<<str<<endl;
}
