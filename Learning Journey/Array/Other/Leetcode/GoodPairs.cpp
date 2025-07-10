#include <iostream>
using namespace std;

int main()
{
 // int size;
 // cin >> size;

 // int arr[size];
 // for (int i = 0; i < size; i++)
 // {
 //  cin >> arr[i];
 // }

 int ex[] = {1, 2, 4, 1, 8, 7, 4, 2};
 int exS = sizeof(ex) / sizeof(ex[0]);

 for (int i = 0; i < exS; i++)
 {
  int count = 0;
  for (int j = 1; j < exS; j++)
  {
   if (ex[i] == ex[j] && i != j)
   {
    count++;
   }
  }
 }
 return 0;
}