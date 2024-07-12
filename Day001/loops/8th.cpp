#include <iostream>
using namespace std;

int main() {
   int n = 4;
   int fact = 1;
   while(n > 0){
    fact = n*fact;
    n -- ;
   }
   cout << "the factorial is  "<< fact << endl;
}