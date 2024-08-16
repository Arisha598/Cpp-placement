// Remove Dublicate elem in an string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abbackkzy";
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        if (ans.length() > 0)
        {
            if (ans[ans.length() - 1] == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
     cout << ans << " ";
}
