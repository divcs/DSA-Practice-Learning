#include <iostream>
using namespace std;

const int CAPACITY = 100;

void insert(int arr[], int &size, int pos, int elem)
{
    if (size >= CAPACITY)
    {
        cout << "Array is full. Cannot insert.\n";
        return;
    }
    if (pos < 0 || pos > size)
    {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    size++;
    cout << "Element inserted.\n";
}

void deleteAt(int arr[], int &size, int pos)
{
    if (pos < 0 || pos >= size)
    {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element deleted.\n";
}
void deleteByValue(int arr[], int &size, int value)
{
    int pos = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "Value not found in array.\n";
        return;
    }

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element with value " << value << " deleted.\n";
}

int search(int arr[], int size, int elem)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}

void update(int arr[], int size, int pos, int newVal)
{
    if (pos < 0 || pos >= size)
    {
        cout << "Invalid position.\n";
        return;
    }
    arr[pos] = newVal;
    cout << "Element updated.\n";
}

void display(int arr[], int size)
{
    if (size == 0)
    {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[CAPACITY] = {1, 2, 3, 4, 5};
    int size = 5;
    int choice, elem, pos;

    do
    {
        cout << "\n--- Array Operations Menu ---\n";
        cout << "1. Insert\n2. Delete\n3. Search\n4. Update\n5. Display\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter position (0 to " << size << "): ";
            cin >> pos;
            cout << "Enter element to insert: ";
            cin >> elem;
            insert(arr, size, pos, elem);
            break;
        case 2:
            cout << "Enter position to delete (0 to " << size - 1 << "): ";
            cin >> pos;
            deleteAt(arr, size, pos);
            break;
        case 3:
            cout << "Enter element to search: ";
            cin >> elem;
            pos = search(arr, size, elem);
            if (pos != -1)
                cout << "Element found at position: " << pos << endl;
            else
                cout << "Element not found.\n";
            break;
        case 4:
            cout << "Enter position to update (0 to " << size - 1 << "): ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> elem;
            update(arr, size, pos, elem);
            break;
        case 5:
            display(arr, size);
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
