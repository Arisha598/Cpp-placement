// Remove part of a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    cout << s << "  ";
}