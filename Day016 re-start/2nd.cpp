//methods of strings
#include<iostream>
using namespace std;
int main(){
    string str1 ="arisha";
    string str2="Arisha";
    if(str1.compare(str2) == 0){
        cout<<"The string is exactly same"<<endl;
    }
    else{
        cout<<"The string is not equal"<<endl;
    }
}