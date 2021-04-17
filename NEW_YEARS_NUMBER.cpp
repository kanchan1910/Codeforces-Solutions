#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
    int n ;
    cin >> n;
    int f = 0;
    for(int i = 0 ; i <= 1000; i++)
    {
        int count2020 = (i*2020);
        int count2021 = (n - count2020);
        if(count2021 < 0)
        {
            break;
        }
        if(count2021 % 2021 == 0)
        {
            f = 1;
            break;
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


#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
int t; 
cin >> t;
while(t--)
{
    int n ;
    cin >> n;
  int count2021  = n % 2020;
  int count2020 = (n - 2021*count2021)/2020;
  if(count2020 >=0 && count2020*2020 + count2021*2021 == n)
  {
      cout << "YES" << endl;
  }
  else
  {
      cout << "NO" << endl;
  }
}

}
// better solution
