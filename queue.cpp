#include<iostream>
using namespace std;
struct queue{
    int size;
    int front, rear;
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q= new int[size];
}
void enqueue(struct queue *q, int x)
{
    if(q->rear==q->size-1)
    {
        cout << "queue is Full";
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}
void dequeue(struct queue *q)
{
    int x = -1;
    if (q->front == q->rear) 
    {
        cout << "queue is empty ";
}
else{
    q->front++;
    x=q->Q[q->front];
}
}

void display(struct queue q)
{
    int i;
    for (i = q.front + 1; i <= q.rear;i++)
    {
        cout << q.Q[i] << endl;
    }
}

int main()
{
    queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 60);
    display(q);
    cout << "after deque \n";
    dequeue(&q);
    dequeue(&q);
    display(q);
    return 0;
}