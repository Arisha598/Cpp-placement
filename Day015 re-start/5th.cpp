//Palindrome
#include<iostream>
using namespace std;
bool Palindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s] != ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}
int main(){
    char ch[20]="arisha";
    int n =4;
    cout<<" The String is Palindome  ";
    cout<< Palindrome(ch,n);
}