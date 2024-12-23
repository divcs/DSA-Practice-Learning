#include <iostream>
#include <string>
using namespace std;

int main()
{
 // string is any case
 string s;
 cin >> s;

 int q;
 cin >> q;

 // hash array precomputation
 int hash[256] = {0};
 for (int i = 0; i < s.length(); i++)
 {
  // use char - 'A' for uppercase string only
  hash[s[i]]++; // autocasts char to int value since hash array is int
 }

 while (q--)
 {
  char ch;
  cin >> ch;

  cout << hash[ch] << endl;
 }
 return 0;
}