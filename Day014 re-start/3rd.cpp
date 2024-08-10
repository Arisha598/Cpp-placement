//remove all occ in an string
#include<iostream> 
using namespace std;
string Removeallocc(string s,string part){
    while(s.length() !=0 && s.find(part) < s.length()){
          s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){

    string s ="daabcbaabcbc";
    string part="abc";
cout<<Removeallocc(s,part);
}