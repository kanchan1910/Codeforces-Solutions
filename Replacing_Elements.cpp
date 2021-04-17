#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin >> t;
while(t--){
    int n,d;
    cin >> n >> d;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if(arr[0] > d || arr[1] > d){
        cout << "NO" << endl;
        continue;
    }
    if(arr[n - 1] <= d){
        cout << "YES" << endl;
        continue;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > d){
            arr[i] = arr[0] + arr[1];
        }
    }
    int f=0;
    for(int i = 0; i < n; i++){
        if(arr[i] > d){
           f = 1;
           break;
        }
    }
    if(f == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
}

// OR
// core idea
/*it means that we can choose for each element either not to change it or make it equal to mn1+mn2.
 So, to be able to make all elements ≤d we need just check that either mn1 + mn2 ≤ d or maximum ai ≤ d.

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin >> t;
while(t--){
    int n,d;
    cin >> n >> d;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if(arr[0] > d || arr[1] > d){
        cout << "NO" << endl;
        continue;
    }
    if(arr[n - 1] <= d){
        cout << "YES" << endl;
        continue;
    }
    if(arr[0] + arr[1] <= d){
        cout << "YES" << endl;
        continue;
    }
    cout << "NO" << endl;
}
}
