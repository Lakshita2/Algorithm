//check  if s1 s2 are rotations of each other or not --page1

#include<iostream>
using namespace std;

//will not work if string contains dupliacte characters like ABACD
bool checkRotation(string s1, string s2){
     
     int n1= s1.size();
     int n2= s2.size();

     if(n1!=n2){
        return false;

     }
     
     int rotateby=-1;

     //get the index of the 1st char of s1 in s2
     for(int i=0; i<n2; i++){
        if(s2[i]== s1[0]){    
            rotateby=i;
            break;
        }
     }
     if(rotateby==-1){
        return false;
     }
     


     for(int i=0; i<n1; i++){
        if(s1[i] != s2[(i+rotateby)% n2]){   
            return false;  
        }
     }
     return true;

}

//for duplicate chararcters present
bool checkRotationD(string s1, string s2){
    int n1= s1.size();
     int n2= s2.size();

     if(n1!=n2){
        return false;

     }
     

     //if s1 and s2 are rotations of ech other then  s2 will be the substring of s1+s1
     s1+=s1;
     if(s1.find(s2)!= string::npos){
        return true;
     }
     return false;
}


int main()
{
     string s1, s2;

     cout<<"Enter string s1: ";
     cin>>s1;
     cout<<"Enter string s2: ";
     cin>>s2;

    //  cout<<checkRotation(s1, s2);  
    cout<<checkRotationD(s1,s2);   
     return 0;
}