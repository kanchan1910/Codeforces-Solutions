#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void init_code()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
}
int main()
{

	init_code();
    bool prime[1000001];
    memset(prime,false,sizeof(prime));
    for(int i = 2; i * i <= 1000001 ; i++)
    {
        if(prime[i] == false)
        {
            for(int j = i * i ; j <= 1000001 ; j += i)
            {
                prime[j] = true;
            }
        }
    }
    int ans[1000001] = {0};
    int count = 0;
    for(int i = 5; i <= 1000001 ; i++)
    {
        if(prime[i] == false && prime[i - 2] == false)
        {
            count++;
        }
        ans[i] = count;
    }
	int t;
	cin >> t;
	while (t--)
	{
		int n ;
        cin >> n;
        if(n <= 4)
        {
            cout << 0 << endl;
            continue;
        }
        cout << ans[n] << endl;
	}

}
