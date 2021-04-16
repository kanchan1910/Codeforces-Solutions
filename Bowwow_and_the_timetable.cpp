#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str=="0"){
        cout<<0<<endl;
        return 0;
    }
    //log4(N)~log2(N)/log2(4)~log2(N)/2
    int one=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            one++;
        }
    }
    if(one==1){
        //power of two
        cout<<ceil((str.length()-1)/2.0)<<endl;
    }
    else{
        cout<<ceil((str.length())/2.0)<<endl;
    }
}
//brute foce sol would be to first derive the number from the binary representaion given and then return the ans as 1+log4(n)
