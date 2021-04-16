#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
    lli n ;
    cin >> n;
    if(ceil(log2(n)) == floor(log2(n)))
    {
        cout << "NO" << endl;
    }
    else
    {
    cout << "YES" << endl;    
    }
}
}
// OR

#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
    lli n ;
    cin >> n;
    if(__builtin_popcountll(n) == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
    cout << "YES" << endl;    
    }
}
}
