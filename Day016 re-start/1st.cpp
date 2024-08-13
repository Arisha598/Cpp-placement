//Basics of Strings
#include<iostream>
using namespace std;
int main(){
    string str;
    ///Input of String
    cin >> str;
    //Print the strings
    cout<<str<<endl;

    //method of strings
    cout<<"The length is :"<<str.length()<<endl;
    cout<<"The string is :"<<str.empty()<<endl;

    str.push_back('@');
    cout<<str<<endl;

    //Sub-String
    cout<<"the substrinng is :"<<str.substr(0,4);

}
