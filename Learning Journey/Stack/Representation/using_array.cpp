#include <iostream>
using namespace std;

#define SIZE 100

class StackArray
{
    int arr[SIZE];
    int top;

public:
    StackArray() { top = -1; }

    void push(int x)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << "\n";
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    StackArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.peek();
    s.display();
    return 0;
}
