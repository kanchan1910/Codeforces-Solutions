#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        
    int paper_capacity,plastic_capacity,other_capacity;
    
    cin>>paper_capacity>>plastic_capacity>>other_capacity;
    
    int paper,plastic,other,paper_and_other,plastic_and_other;
    
    cin>>paper>>plastic>>other>>paper_and_other>>plastic_and_other;
    
    if(paper>paper_capacity||plastic>plastic_capacity||other>other_capacity){
        
        cout<<"NO"<<endl;
        
        continue;
    }
    
    int left_paper_size=paper_capacity-paper;
    
    int left_plastic_size=plastic_capacity-plastic;
    
    int left_other_size=other_capacity-other;
    
    if(paper_and_other > (left_paper_size + left_other_size)){
        
        cout<<"NO"<<endl;
        
        continue;
    }
    
    left_paper_size = left_paper_size - paper_and_other;
    
    if(left_paper_size < 0){
        
        paper_and_other = abs(left_paper_size);
        
        if(paper_and_other > left_other_size){
            
            cout<<"NO"<<endl;
            
            continue;
        }
        else{
            
            left_other_size = left_other_size - paper_and_other;
        }
    }
    
    if(plastic_and_other > (left_other_size + left_plastic_size)){
        
        cout<<"NO"<<endl;
        
        continue;
    }
    
    left_plastic_size = left_plastic_size - plastic_and_other;
    
     if(left_plastic_size < 0){
        
        plastic_and_other = abs(left_plastic_size);
        
        if(plastic_and_other > left_other_size){
            
            cout<<"NO"<<endl;
            
            continue;
        }
    }
    cout<<"YES"<<endl;
    }
}
