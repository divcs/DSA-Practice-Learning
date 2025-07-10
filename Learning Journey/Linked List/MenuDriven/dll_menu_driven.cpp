#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = nullptr;

void insertAtBeginning(int val)
{
    Node *newNode = new Node{val, nullptr, head};
    if (head)
        head->prev = newNode;
    head = newNode;
    cout << "Inserted at beginning.\n";
}

void insertAtEnd(int val)
{
    Node *newNode = new Node{val, nullptr, nullptr};
    if (!head)
    {
        head = newNode;
        cout << "Inserted at end.\n";
        return;
    }
    Node *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    cout << "Inserted at end.\n";
}

void insertAtPosition(int val, int pos)
{
    if (pos < 0)
    {
        cout << "Invalid position.\n";
        return;
    }
    if (pos == 0)
    {
        insertAtBeginning(val);
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp)
    {
        cout << "Position out of range.\n";
        return;
    }

    Node *newNode = new Node{val, temp, temp->next};
    if (temp->next)
        temp->next->prev = newNode;
    temp->next = newNode;
    cout << "Inserted at position " << pos << ".\n";
}

void deleteFromBeginning()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head)
        head->prev = nullptr;
    delete temp;
    cout << "Deleted from beginning.\n";
}

void deleteFromEnd()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    if (!temp->next)
    {
        delete head;
        head = nullptr;
        cout << "Deleted from end.\n";
        return;
    }
    while (temp->next)
        temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
    cout << "Deleted from end.\n";
}

void deleteFromPosition(int pos)
{
    if (!head || pos < 0)
    {
        cout << "Invalid position.\n";
        return;
    }
    if (pos == 0)
    {
        deleteFromBeginning();
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos && temp; i++)
        temp = temp->next;

    if (!temp)
    {
        cout << "Position out of range.\n";
        return;
    }

    if (temp->prev)
        temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    delete temp;
    cout << "Deleted from position " << pos << ".\n";
}

void deleteByValue(int val)
{
    Node *temp = head;
    while (temp && temp->data != val)
        temp = temp->next;
    if (!temp)
    {
        cout << "Value not found.\n";
        return;
    }
    if (temp == head)
        deleteFromBeginning();
    else
    {
        if (temp->prev)
            temp->prev->next = temp->next;
        if (temp->next)
            temp->next->prev = temp->prev;
        delete temp;
        cout << "Deleted node with value " << val << ".\n";
    }
}

void search(int val)
{
    Node *temp = head;
    int pos = 0;
    while (temp)
    {
        if (temp->data == val)
        {
            cout << "Value found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Value not found.\n";
}

void displayForward()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    cout << "List (forward): ";
    while (temp)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void displayBackward()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    while (temp->next)
        temp = temp->next;
    cout << "List (backward): ";
    while (temp)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

int main()
{
    int choice, val, pos;
    do
    {
        cout << "\n--- Doubly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n";
        cout << "4. Delete from Beginning\n5. Delete from End\n6. Delete from Position\n";
        cout << "7. Delete by Value\n8. Search\n9. Display Forward\n10. Display Backward\n11. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            insertAtBeginning(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            insertAtEnd(val);
            break;
        case 3:
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            insertAtPosition(val, pos);
            break;
        case 4:
            deleteFromBeginning();
            break;
        case 5:
            deleteFromEnd();
            break;
        case 6:
            cout << "Enter position: ";
            cin >> pos;
            deleteFromPosition(pos);
            break;
        case 7:
            cout << "Enter value to delete: ";
            cin >> val;
            deleteByValue(val);
            break;
        case 8:
            cout << "Enter value to search: ";
            cin >> val;
            search(val);
            break;
        case 9:
            displayForward();
            break;
        case 10:
            displayBackward();
            break;
        case 11:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 11);
    return 0;
}
