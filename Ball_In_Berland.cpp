#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
   int n,m,k;
   cin >> n >> m >> k;
   int a[k],b[k];
   for(int i = 0 ; i < k; i++)
   {
       cin >> a[i];
   }
   for(int i = 0 ; i < k ; i++)
   {
       cin >> b[i];
   }
   vector<int>ma(n + 1),mb(m + 1);
   for(int i = 0 ; i < k ; i++)
   {
       ma[a[i]]++;
   }
   for(int i = 0 ; i < k ; i++)
   {
       mb[b[i]]++;
   }
   lli ans = 0;
   for(int i = 0 ; i < k ;i++)
   {
       ans += (k - 1) - (ma[a[i]] - 1) - (mb[b[i]] - 1);
   }
   cout << ans/2 <<endl;
}

}
// tc o(n)
// sc o(1)
// code explainer se smja


// other method , take each pair and then count itd corresponding valid pairs
// tc o(n*n)
// sc o(1)
