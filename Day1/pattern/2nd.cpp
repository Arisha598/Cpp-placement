//pattern-02
#include<iostream>
using namespace std;
void Pattern2(int n){
    for(int i=0;i< n ;i++){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n =5;
    Pattern2(n);
}