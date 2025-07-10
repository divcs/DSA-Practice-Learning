#include <iostream>
using namespace std;

void insert(int *&arr, int &size, int pos, int elem)
{
    // Create a new array of size + 1
    int *newArr = new int[size + 1];

    // Copy elements before insertion position
    for (int i = 0; i < pos; i++)
    {
        newArr[i] = arr[i];
    }

    // Insert the new element
    newArr[pos] = elem;

    // Copy remaining elements
    for (int i = pos; i < size; i++)
    {
        newArr[i + 1] = arr[i];
    }

    // Delete old array and update pointer and size
    delete[] arr;
    arr = newArr;
    size++;
}

int main()
{
    int size = 5;
    int *arr = new int[size]{1, 2, 4, 6, 7}; // dynamic array initialization

    insert(arr, size, 3, 10);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr; // clean up memory
    return 0;
}
