#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main(){
   int n,m;
   cin>>n>>m;
   char arr[n][m];
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>arr[i][j];
       }
   }
   int b=0;
    int minrow=INT_MAX,maxrow=INT_MIN,mincol=INT_MAX,maxcol=INT_MIN;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(arr[i][j]=='B'){
               b++;
               minrow=min(minrow,i);
               mincol=min(mincol,j);
               maxrow=max(maxrow,i);
               maxcol=max(maxcol,j);
           }
       }
   }
   if(b==0){
       cout<<1<<endl;
       return 0;
   }
   int side=0;
   side=max(maxrow-minrow+1,maxcol-mincol+1);
   if(side>n||side>m){
       cout<<-1<<endl;
       return 0;
   }
   cout<<(side*side-b)<<endl;
}
