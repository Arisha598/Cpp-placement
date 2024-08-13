// Replace and erase method in string
#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello my name is kitty ";
    string s2 = "kitty";
    cout << s1.replace(0, 4, s2)<<endl;
    cout<<s1.erase(0,5)<<endl;
}