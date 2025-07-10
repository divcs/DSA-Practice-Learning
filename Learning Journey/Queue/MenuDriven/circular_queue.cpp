#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue
{
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue()
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if ((rear + 1) % SIZE == front)
        {
            cout << "Queue Overflow (Full)\n";
            return;
        }

        if (front == -1)
        { // First element
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % SIZE;
        }
        arr[rear] = x;
        cout << x << " enqueued to circular queue\n";
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue Underflow (Empty)\n";
            return;
        }

        cout << arr[front] << " dequeued from circular queue\n";

        if (front == rear)
        { // Only one element was present
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }

    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element: " << arr[front] << "\n";
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Circular Queue elements: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
};

int main()
{
    CircularQueue q;
    int choice, value;

    do
    {
        cout << "\n--- Circular Queue using Array ---\n";
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
