///Revision - String


//Length of string
#include<iostream>
using namespace std;
int Length(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[]="arishachaudhary";
    cout<<"The Length is  "<<Length(name);

}