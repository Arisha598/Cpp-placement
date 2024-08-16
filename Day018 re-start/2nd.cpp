// PAlindrome substrings
#include <iostream>
#include <string>
using namespace std;
int expandAoundIndex(string s, int i, int j)
{
    int count = 0;
    int n = s.length();
    while (i >= 0 && j <= n && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int main()
{
    string s = "abc";
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // odd
        int oddans = expandAoundIndex(s, i, i);
        count = count + oddans;
        // even
        int evenans = expandAoundIndex(s, i, i + 1);
        count = count + evenans;
    }
    for (int i = 0; i < n; i++)
    {
        cout << count << " ";
    }
}