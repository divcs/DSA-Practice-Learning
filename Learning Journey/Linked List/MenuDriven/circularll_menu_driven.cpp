#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr;

int getLength()
{
    if (!head)
        return 0;
    int count = 1;
    Node *temp = head->next;
    while (temp != head)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtBeginning(int val)
{
    Node *newNode = new Node{val, nullptr};
    if (!head)
    {
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
    cout << "Inserted at beginning.\n";
}

void insertAtEnd(int val)
{
    Node *newNode = new Node{val, nullptr};
    if (!head)
    {
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    cout << "Inserted at end.\n";
}

void insertAtPosition(int val, int pos)
{
    int length = getLength();
    if (pos < 0 || pos > length)
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
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;
    Node *newNode = new Node{val, temp->next};
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
    if (head->next == head)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        Node *toDelete = head;
        head = head->next;
        temp->next = head;
        delete toDelete;
    }
    cout << "Deleted from beginning.\n";
}

void deleteFromEnd()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *temp = head;
        Node *prev = nullptr;
        while (temp->next != head)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        delete temp;
    }
    cout << "Deleted from end.\n";
}

void deleteFromPosition(int pos)
{
    int length = getLength();
    if (!head || pos < 0 || pos >= length)
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
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    cout << "Deleted from position " << pos << ".\n";
}

void deleteByValue(int val)
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    if (head->data == val)
    {
        deleteFromBeginning();
        return;
    }
    Node *temp = head;
    Node *prev = nullptr;
    do
    {
        prev = temp;
        temp = temp->next;
        if (temp->data == val)
        {
            prev->next = temp->next;
            delete temp;
            cout << "Deleted node with value " << val << ".\n";
            return;
        }
    } while (temp != head);
    cout << "Value not found.\n";
}

void search(int val)
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    int pos = 0;
    Node *temp = head;
    do
    {
        if (temp->data == val)
        {
            cout << "Value found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        pos++;
    } while (temp != head);
    cout << "Value not found.\n";
}

void display()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }
    Node *temp = head;
    cout << "List: ";
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)\n";
}

int main()
{
    int choice, val, pos;
    do
    {
        cout << "\n--- Circular Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n";
        cout << "4. Delete from Beginning\n5. Delete from End\n6. Delete from Position\n";
        cout << "7. Delete by Value\n8. Search\n9. Display\n10. Exit\n";
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
