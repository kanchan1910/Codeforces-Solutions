#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        string str;
        cin >> str;
        bool f = false;
        unordered_map<char, int>m;
        for(int i = 0; i < n; i++)
        {
            if(m.find(str[i]) == m.end())
            {
                m[str[i]] = i;
            }
            else
            {
                int prev_index = m[str[i]];
                if((i - prev_index) > 1)
                {
                    f = true;
                    break;
                }
                else
                {
                    m[str[i]]++;
                }
            }
        }
        if(f == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
