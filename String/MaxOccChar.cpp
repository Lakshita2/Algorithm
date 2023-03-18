#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    
    string s;
    cin>>s;
    int freq[26];
    
    for(int i=0; i<26; i++){
        freq[i]=0;
    }
   
    for(int i=0; i<s.length(); i++){
        freq[s[i] - 'a']++;
    }

    int maxF=0;
    char ans;
    
    for(int i=0; i<26; i++){
        
        if(freq[i]> maxF){
            ans= i + 'a';
            maxF= freq[i];
        }
    }
    cout<<ans<<" "<<maxF<<endl;
    
    return 0;
}