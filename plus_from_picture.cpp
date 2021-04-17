#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,h;
    cin>>w>>h;
    char arr[w][h];
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            cin>>arr[i][j];
        }
    }
    int stars=0;
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            if(arr[i][j]=='*'){
                stars++;
            }
        }
    }
    bool exist=false;
    for(int i=1;i<w-1;i++){
        for(int j=1;j<h-1;j++){
            if(arr[i][j]=='*'&&arr[i-1][j]=='*'&&arr[i+1][j]=='*'&&arr[i][j-1]=='*'&&arr[i][j+1]=='*'){
                exist =true;
                stars--;
                int x,y;
                x=i-1,y=j;
                while(x>=0&&arr[x][y]=='*'){
                    stars--;
                    x--;
                }
                x=i+1,y=j;
                while(x<=w-1&&arr[x][y]=='*'){
                    stars--;
                    x++;
                }
                x=i,y=j-1;
                while(y>=0&&arr[x][y]=='*'){
                    stars--;
                    y--;
                }
                x=i,y=j+1;
                while(y<=h-1&&arr[x][y]=='*'){
                    stars--;
                    y++;
                }
            }
            if(exist)
            break;
        }
        if(exist)
        break;
    }
    if(exist&&stars==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
