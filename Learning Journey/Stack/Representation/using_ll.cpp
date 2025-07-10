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
        cout << "Stack: ";
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
    s.push(5);
    s.push(15);
    s.push(25);
    s.display();
    s.pop();
    s.peek();
    s.display();
    return 0;
}
