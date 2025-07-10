#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr;

void insertAtBeginning(int value)
{
    Node *newNode = new Node{value, head};
    head = newNode;
    cout << "Inserted at beginning.\n";
}

void insertAtEnd(int value)
{
    Node *newNode = new Node{value, nullptr};
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted at end.\n";
}

void insertAtPosition(int value, int pos)
{
    if (pos < 0)
    {
        cout << "Invalid position.\n";
        return;
    }
    if (pos == 0)
    {
        insertAtBeginning(value);
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++)
        temp = temp->next;

    if (temp == nullptr)
    {
        cout << "Position out of range.\n";
        return;
    }

    Node *newNode = new Node{value, temp->next};
    temp->next = newNode;
    cout << "Inserted at position " << pos << ".\n";
}

void deleteFromBeginning()
{
    if (head == nullptr)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    cout << "Deleted from beginning.\n";
}

void deleteFromEnd()
{
    if (head == nullptr)
    {
        cout << "List is empty.\n";
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }
    cout << "Deleted from end.\n";
}

void deleteFromPosition(int pos)
{
    if (head == nullptr || pos < 0)
    {
        cout << "Invalid operation.\n";
        return;
    }
    if (pos == 0)
    {
        deleteFromBeginning();
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp->next != nullptr; i++)
        temp = temp->next;

    if (temp->next == nullptr)
    {
        cout << "Position out of range.\n";
        return;
    }

    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    cout << "Deleted from position " << pos << ".\n";
}

void deleteByValue(int value)
{
    if (head == nullptr)
    {
        cout << "List is empty.\n";
        return;
    }

    if (head->data == value)
    {
        deleteFromBeginning();
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != value)
        temp = temp->next;

    if (temp->next == nullptr)
    {
        cout << "Value not found.\n";
        return;
    }

    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    cout << "Node with value " << value << " deleted.\n";
}

void search(int value)
{
    Node *temp = head;
    int pos = 0;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            cout << "Found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Value not found.\n";
}

void display()
{
    if (head == nullptr)
    {
        cout << "List is empty.\n";
        return;
    }

    Node *temp = head;
    cout << "List: ";
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    int choice, value, pos;

    do
    {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n";
        cout << "4. Delete from Beginning\n5. Delete from End\n6. Delete from Position\n";
        cout << "7. Delete by Value\n8. Search\n9. Display\n10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            insertAtEnd(value);
            break;
        case 3:
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;
            insertAtPosition(value, pos);
            break;
        case 4:
            deleteFromBeginning();
            break;
        case 5:
            deleteFromEnd();
            break;
        case 6:
            cout << "Enter position to delete: ";
            cin >> pos;
            deleteFromPosition(pos);
            break;
        case 7:
            cout << "Enter value to delete: ";
            cin >> value;
            deleteByValue(value);
            break;
        case 8:
            cout << "Enter value to search: ";
            cin >> value;
            search(value);
            break;
        case 9:
            display();
            break;
        case 10:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 10);

    return 0;
}
