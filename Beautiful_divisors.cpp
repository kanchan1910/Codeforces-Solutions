#include<bits/stdc++.h>
using namespace std;
int arr[10]= {32640, 8128, 2016, 496, 120, 28, 6, 1};
int main(){
int n;
cin>>n;
for(int i=0;i<8;i++){
    if(n%arr[i]==0){
        cout<<arr[i]<<endl;
        return 0;
    }
}
}

/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=8;i>=1;i--){
    int x=((pow(2,i)-1)*(pow(2,i-1)));
    if(n%x==0){
        cout<<x<<endl;
        return 0;
    }
}
}*/
