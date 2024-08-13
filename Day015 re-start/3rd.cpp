//Length of an string
#include<iostream>
#include<string>
using namespace std;
int GetLength(char ch[]){
    int count =0;
    int i=0;
    while(ch[i] != '\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    char ch[20];
    cin>>ch;
    cout<<"The Length of the string is :"<<GetLength(ch);
}