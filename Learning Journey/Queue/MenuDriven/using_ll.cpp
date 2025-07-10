#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class QueueLL
{
    Node *front, *rear;

public:
    QueueLL()
    {
        front = rear = nullptr;
    }

    void enqueue(int x)
    {
        Node *newNode = new Node{x, nullptr};
        if (!rear)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << x << " enqueued to queue\n";
    }

    void dequeue()
    {
        if (!front)
        {
            cout << "Queue Underflow\n";
            return;
        }
        Node *temp = front;
        cout << front->data << " dequeued from queue\n";
        front = front->next;
        if (!front)
            rear = nullptr;
        delete temp;
    }

    void peek()
    {
        if (!front)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element: " << front->data << "\n";
    }

    void display()
    {
        if (!front)
        {
            cout << "Queue is empty\n";
            return;
        }
        Node *temp = front;
        cout << "Queue elements: ";
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
    QueueLL q;
    int choice, value;

    do
    {
        cout << "\n--- Queue using Linked List ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
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
