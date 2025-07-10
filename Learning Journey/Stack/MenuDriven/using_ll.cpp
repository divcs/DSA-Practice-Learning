#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class StackLL
{
    Node *top;

public:
    StackLL() { top = nullptr; }

    void push(int x)
    {
        Node *newNode = new Node{x, top};
        top = newNode;
        cout << x << " pushed into stack\n";
    }

    void pop()
    {
        if (!top)
        {
            cout << "Stack Underflow\n";
            return;
        }
        Node *temp = top;
        cout << top->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }

    void peek()
    {
        if (!top)
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << top->data << "\n";
    }

    void display()
    {
        if (!top)
        {
            cout << "Stack is empty\n";
            return;
        }
        Node *temp = top;
        cout << "Stack elements (top to bottom): ";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    StackLL s;
    int choice, value;

    do
    {
        cout << "\n--- Stack using Linked List ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
