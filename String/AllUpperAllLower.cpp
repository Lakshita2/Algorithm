#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


int main(){
    
    string s="gdasukfdDHIHhdskfp";

    for(int i=0 ;i <s.length(); i++){
        if(s[i]>= 'a' && s[i]<= 'z')
            s[i] = s[i] -32;  
    }
   // transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;

    for(int i=0 ;i <s.length(); i++){
        if(s[i]>= 'A' && s[i]<= 'Z')
            s[i] = s[i] +32;
    }
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;


    return 0;
}