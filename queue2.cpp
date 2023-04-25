#include<iostream>
using namespace std;
class queue {
public:
    int data,front,rear;
    int size;
    int *Q;
    void create(queue *q, int size);
    void enqueue(queue *q,int x);
    void dequeu(queue *q);
    public:
    void display(queue q);
};
void create(queue *q,int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q= new int[size];
}
void queue::enqueue(queue *q,int x)
{
if(q->rear==q->size-1)
{
    cout << "queue is full";
}
else{
    q->rear++;
    q->Q[q->rear]=x;
}
}
void queue::dequeu(queue *q)
{
    int x = -1;
    if(q->front==q->rear)
    {
        cout << "queue is full";
    }
    else
    {
        q->front++;
        x=Q[q->front];
    }
}
void queue::display(queue q)
{
    for (int i = q.front + 1; i<q.rear ; i++)
    {
        cout << q.Q[i] << endl;
}
}

int main()
{
    queue a;
    a.create(&a,4);
    a.enqueue(&a, 13);
    a.enqueue(&a, 2);
    a.dequeu(&a);
    a.display(a);
}