#include <iostream>
using namespace std;

struct Queue
{
    int *arr;
    int front;
    int rear;

    Queue()
    {
        arr = new int[1000];
        front = rear = -1;
    }
};

void push(Queue &q, int value)
{
    if (q.front == -1)
    {
        return;
    }
    
}
int main()
{

    return 0;
}