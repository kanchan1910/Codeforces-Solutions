Given a string s and an int k, return an int representing the number of substrings (not unique) of s with exactly k distinct characters. If the given string doesn't have k distinct characters, return 0.
https://leetcode.com/problems/subarrays-with-k-different-integers

Example 1:

Input: s = "pqpqs", k = 2
Output: 7
Explanation: ["pq", "pqp", "pqpq", "qp", "qpq", "pq", "qs"]
Example 2:

Input: s = "aabab", k = 3
Output: 0
Constraints:

The input string consists of only lowercase English letters [a-z]
0 ≤ k ≤ 26


Method 1 (Brute Force)

If the length of string is n, then there can be n*(n+1)/2 possible substrings. A simple way is to generate all the substring and check each one whether it has exactly k unique characters or not. If we apply this brute force, it would take O(n*n) to generate all substrings and O(n) to do a check on each one. Thus overall it would go O(n*n*n).




//brute force solution o(N^2) tc

int fun(string str,int k){
    
    int n=str.length();
    
    if(n==0){
        
        return 0;
        
    }
    
    unordered_map<char,int>m;
    
    for(int i=0;i<n;i++){
        
        m[str[i]]++;
        
    }
    
    if(m.size() < k){
        
        return 0;
    }
    
    m.clear();
    
    int ans=0;
    
    for(int i=0;<n;i++){
        
        string temp=str[i];
        
        m[str[i]]++;
        
        for(int j=i+1;j<n;j++){
            
            m[str[j]]++;
            
            temp+=str[j];
            
            if(m.size() > k){
                
                break;
                
            }
            else if(m.size() == k){
                
                ans++;
                
            }
        }
        
        m.clear();
        
    }
    
    return ans;
}

//sliding window  tc  ???

bool fun1(string str,int k){
    
    unordered_set<char>s;
    
    for(int i=0;i<str.length();i++){
        
        s.insert(str[i]);
        
        if(s.size() > k){
            
            return false;
        }
    }
    
    return s.size() == k;
}
int fun(string str,int k){
    
    int n=str.length();
    
    if(n==0){
        
        return 0;
        
    }
    
    int ans=0;
    
    int x = k;
    
    while(x<n){
        
        for(int i=0;i<=(n-x);i++){
            
            if(fun1(str.substr(i,i+x),k)==true){
                
                ans++;
            }
        }
        
        x++;
    }
    
   return ans;
}

//DOUBT????????????????????/

//o(n)

// the number of subarrays with at most K distinct elements
int most_k_chars(string &s, int k) {
    if (s.size() == 0) {
        return 0;
    }
    unordered_map<char, int> table;
    int num = 0, left = 0;
    for (int i = 0; i < s.size(); i++) {
        table[s[i]]++;
        while (table.size() > k) {
            table[s[left]]--;
            if (table[s[left]] == 0) {
                table.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num;
}

int exact_k_chars(string &s, int k) {
    return most_k_chars(s, k) - most_k_chars(s, k - 1);
}


