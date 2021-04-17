#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int min_index=-1;
int max_index=-1;
int min_ele=INT_MAX;
int max_ele=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max_ele){
        max_ele=arr[i];
        max_index=i;
    }
    if(arr[i]<min_ele){
        min_ele=arr[i];
        min_index=i;
    }
}
//cout<<min_index<<" "<<max_index<<endl;
int ans=(abs(max_index-min_index));
int min_left=abs(max_index-0);
int min_right=abs(max_index-(n-1));
int max_left=abs(min_index-0);
int max_right=abs(min_index-(n-1));
cout<<max({ans,min_left,min_right,max_left,max_right})<<endl;
}
