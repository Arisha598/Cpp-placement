#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* ptr =&a;
    int *q =ptr;
    int *r = q;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*ptr<<endl;
    cout<<*q<<endl;
    cout<<*r<<endl;
}