#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
string s;
cin >> s;
        int n = s.length();
        for(int i =0; i < n; i++){
        	if(stoi(s.substr(i, 1))%8 == 0){
        		cout <<"YES"<<endl;
        		cout << s.substr(i, 1)<<endl;
        		return 0;
        	}
        }
        for(int i = 0; i < n; i++){
        	for(int j = i + 1; j < n; j++){
        		string x = "";
        		x += s[i];
        		x += s[j];
        		int m = stoi(x);
        		if(m%8 == 0){
        			cout << "YES"<<endl;
        			cout << m<<endl;
        			return 0;
        		}
        	}
        }
        for(int i = 0; i < n; i++){
        	for(int j = i + 1; j < n; j++){
        		for(int k = j + 1; k < n; k++){
        			string x = "";
        			x += s[i];
        			x += s[j];
        			x += s[k];
        			int m = stoi(x);
        			if(m%8 == 0){
        				cout << "YES"<<endl;
        				cout << m<<endl;
        				return 0;
        			}
        		}
        	}
        }
 
        cout << "NO"<<endl;
    	return 0;
}
// a number is divisible by 8 if the last 3 digits of the number is divisible by 8
