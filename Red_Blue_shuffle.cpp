#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int r=0,b=0;
        for(int i=0;i<n;i++){
            if((str1[i]-'0')>(str2[i]-'0')){
                r++;
            }
            else if((str1[i]-'0')<(str2[i]-'0')){
                b++;
            }
        }
        if(r>b){
            cout<<"RED"<<endl;
        }
        else if(b>r){
            cout<<"BLUE"<<endl;
        }
        else{
            cout<<"EQUAL"<<endl;
        }
    }
}
