#include <iostream>
using namespace std;

bool matchingStrings(string s1, string s2)
{
    string word = "";
    s1 = s1 + s1;
    int j = 0;

    for (int i = 0; i < s2.length(); i++)
    {
        word += s1[i];
    }
    if (word == s2)
    {
        return true;
    }

    for (int i = word.size(); i < s1.length(); i++)
    {

        word.erase(word.begin());
        word += s1[i];

        if (word == s2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "abcdeef";
    string s2 = "fabce";

    if (matchingStrings(s1, s2))
    {
        cout << "Matches";
    }
    else
    {
        cout << "Doesn't match.";
    }

    return 0;
}