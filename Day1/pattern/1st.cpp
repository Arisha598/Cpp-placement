//pattern-01
#include<iostream>
using namespace std;
void Pattern1(int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
Pattern1(n);
}