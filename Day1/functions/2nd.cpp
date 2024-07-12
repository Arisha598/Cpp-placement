#include<iostream>
using namespace std;
int Sum(int a ,int b){
    int c = a+b;
    return c ;

}
int main(){
    int a , b;
    cin >> a>>b;
    int store = Sum(a,b);
    cout<< store << endl;

}