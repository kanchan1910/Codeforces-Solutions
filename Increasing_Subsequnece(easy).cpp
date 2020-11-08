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
else{
    count++;
    str+="R";
    val=arr[r];
    r--;
}
while(l<=r){
    if(arr[l]>val&&arr[r]>val){
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
cout<<count<<endl;
cout<<str<<endl;
}
