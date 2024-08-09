//Length of string
#include<iostream>
using namespace std;
int LengthofString(char name[]){
int count =0;
for(int i=0;name[i] != '\0';i++){
    count++;
}
return count;
}
int main(){
    char name[12]="arisha";
    cout<<"The Length is :"<<LengthofString(name)<<endl;
}