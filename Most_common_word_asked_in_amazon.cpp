class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
      unordered_map<string,int>m;
        
        string temp="";
        
        string ans="";
        
        int count=0;
        
      for(int i=0;i<paragraph.length();i++){
          
          if(isalpha(paragraph[i])){
              
              temp+=tolower(paragraph[i]);
          }
          else{
              if(temp!=""){
                  
                  m[temp]++;
                  
              }
              
              temp="";
          }
      }
        if(temp!=""){
            
            m[temp]++;
            
        }
        for(int i=0;i<banned.size();i++){
            
            m[banned[i]]=0;
            
        }
        for(auto x: m){
            
            if(x.second > count){
                
                count = x.second;
                
                ans=x.first;
                
            }
        }
        
        return ans;
        
    }
};

