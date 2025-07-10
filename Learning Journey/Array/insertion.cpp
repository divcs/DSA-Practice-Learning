#include <iostream>
using namespace std;

void insert(int arr[], int capacity, int &size, int pos, int elem)
{
    if (size >= capacity)
    {
        cout << "Insertion failed: array is full." << endl;
        return;
    }

    // Shift elements to the right
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = elem;
    size++;
}

int main()
{
    const int capacity = 10;
    int arr[capacity] = {1, 2, 4, 6, 7};
    int size = 5;

    insert(arr, capacity, size, 3, 10);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
