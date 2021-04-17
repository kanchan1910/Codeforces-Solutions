#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
int eve=0;
int n=str.length();
int index=-1;
for(int i=0;i<n;i++){
    if((str[i]-'0')%2==0){
        eve++;
        index=i;
    }
}
if(eve==0){
    cout<<-1<<endl;
    return 0;
}
if(eve==1){
    swap(str[index],str[n-1]);
    cout<<str<<endl;
    return 0;
}
//if theree are more than 1 even digit then we have to greedily think that which digit we should take so that our final number is the maximum one
//if atleast one even digit that is less than last digit
int less_index_even_digit=-1;
int yes=0;
for(int i=0;i<n;i++){
    if((str[i]-'0')%2==0){
        if((str[i]-'0')<(str[n-1]-'0')){
            less_index_even_digit=i;
            yes++;
        }
    }
}
if(yes!=0){
  for(int i=0;i<n;i++){
    if((str[i]-'0')%2==0){
        if((str[i]-'0')<(str[n-1]-'0')){
            less_index_even_digit=i;
            break;
        }
    }
}
swap(str[less_index_even_digit],str[n-1]);
cout<<str<<endl;
return 0;
}
else{
    //means all the even digits are larger than the last digit
    int large_index_even_digit=-1;
    for(int i=n-2;i>=0;i--){
        if((str[i]-'0')%2==0){
            large_index_even_digit=i;
            break;
        }
    }
    swap(str[n-1],str[large_index_even_digit]);
    cout<<str<<endl;
    return 0;
}

}
