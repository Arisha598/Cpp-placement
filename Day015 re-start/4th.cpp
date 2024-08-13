//Reverse String
#include<iostream>
#include<string>
using namespace std;
void ReverseString(char ch[],int n){\
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
int main(){
    char ch[50]="arisha";
    int n =6;
    ReverseString(ch,n);
    cout<<"Reverse String is :"<<ch;
}