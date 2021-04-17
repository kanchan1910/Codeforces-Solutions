#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
 int n , d;
 cin >> n >> d;
 int arr[n];
 for(int i = 0 ; i < n ;i++)
 {
     cin >> arr[i];
 }

 for(int i = 0 ; i < n ; i++)
 {
     int f = 0;
     int x = arr[i];
     if(x >= d * 10)
     {
         f = 1;
     }
     if( f == 0)
     {
     while( x >= d)
     {
         if(x % d == 0)
         {
             f = 1;
             break;
         }
         x -= 10;
     }
     }
     if(f == 1)
     {
         cout << "YES" << endl;
     }
     else
     {
         cout << "NO" << endl;
     }
 }
}

}
// tc o(n)
// sc o(1)
// observation based
