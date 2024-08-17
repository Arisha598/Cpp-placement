//Reverse The String
#include<iostream>
using namespace std;
void Reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<"The Revrse string is : "<<ch<<" ";
}
int main(){
    char ch[]="arisha";
    int n =6;
    Reverse(ch,n);
}