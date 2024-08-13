//String Concept
#include<iostream>
#include<string>
using namespace std;
int main(){
    char s[100];
    cin >> s;
    cout<<"My Fullname is :"<<s<<endl;


    //To resolve this we use getline function
    cin.getline(s,50);
     cout<<"My Fullname is :"<<s<<endl;
     
}