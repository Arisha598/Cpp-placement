//Palindrome
#include<iostream>
using namespace std;
bool Palindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s] == ch[e]){
            s++;
            e--;
            return true;
        }
        else{
            return false;
        }
    }

}
int main(){
    char ch[]="noonre";
    int n=6;
    cout<<Palindrome(ch,n);
}