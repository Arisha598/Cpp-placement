//Checck Palindrome
#include <iostream>
using namespace std;
bool CheckPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s] != a[e]){
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
    char name[12]="noon";
    int n =3;
    cout<<"The string is "<< CheckPalindrome(name,3);
}