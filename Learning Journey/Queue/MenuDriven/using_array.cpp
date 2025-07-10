#include <iostream>
using namespace std;

#define SIZE 100

class QueueArray
{
    int arr[SIZE];
    int front, rear;

public:
    QueueArray()
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == SIZE - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = x;
        cout << x << " enqueued to queue\n";
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " dequeued from queue\n";
    }

    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element: " << arr[front] << "\n";
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    QueueArray q;
    int choice, value;

    do
    {
        cout << "\n--- Queue using Array ---\n";
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
