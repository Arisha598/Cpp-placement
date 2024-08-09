// Reverse The String
#include <iostream>
using namespace std;
void Reverse(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}
int LengthofString(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[12] = "arisha";
    int len = LengthofString(name);
    cout << "The Length is :" << len << endl;
    Reverse(name, len);
    cout << "After Reversing the string is :" << name;
}