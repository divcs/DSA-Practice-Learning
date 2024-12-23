#include <iostream>
#include <string>
using namespace std;

int main()
{

 // string is all lowercase
 string s;
 cin >> s;

 int q;
 cin >> q;

 // hash array precomputation
 int hash[26] = {0};
 for (int i = 0; i < s.length(); i++)
 {
  hash[s[i] - 'a']++;
 }

 while (q--)
 {
  char ch;
  cin >> ch;

  cout << hash[ch - 'a'] << endl;
 }

 return 0;
}