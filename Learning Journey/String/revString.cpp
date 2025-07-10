#include <iostream>
using namespace std;

int main()
{
    string s = "ayyahhh";
    int start = 0;
    int end = s.length() - 1;

    // while (start <= end)
    // {
    //     if (s[start] != s[end])
    //     {
    //         return 0;
    //     }
    //     start++;
    //     end--;
    // }

    // cout << "Yes, it's PALINDROMEEEE";

    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s;

    return 0;
}