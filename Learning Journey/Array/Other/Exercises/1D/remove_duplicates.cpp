#include <iostream>
#include <set>

using namespace std;

int main()
{
 int size;
 cout << "Enter size of array:";
 cin >> size;
 int arr[size];

 cout << "Array elements: ";
 for (int i = 0; i < size; i++)
 {
  cin >> arr[i];
 }

 // remove duplicates
 set<int> unique;
 for (int i = 0; i < size; i++)
 {
  unique.insert(arr[i]);
 }

 for (auto &value : unique)
 {
  std::cout << value << ' ';
 }
 std::cout << '\n';
 return 0;
}