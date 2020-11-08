#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int

int main(){
int n;
cin>>n;
string str;
cin>>str;
int arr[10];
for(int i=1;i<=9;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if((str[i]-'0')<(arr[str[i]-'0'])   ){
        int j=i;
        while(arr[str[j]-'0']>=str[j]-'0'){
            str[j]=arr[str[j]-'0']+'0';
            j++;
        }
      break;
    }
}
cout<<str<<endl;
}
