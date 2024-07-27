#include <stdio.h>
#define Maxsize 100

int queue[Maxsize];
int front=-1;
int rear=-1;

void enqueue(int element)
{
    if(rear==Maxsize-1)
    {
        printf("Queue is full");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=element;
}

int dequeue()
{
    if(front==-1 || front>=rear)
    {
        printf("Queue is empty \n");
        return -1;
    }
    return queue[front++];
    
}

void display()
{
    if(front==-1 || front>=rear)
    {
        printf("Queue is empty");
        return;
    }
    for(int i=front ; i<=rear ; i++)
    {
        printf("%d",queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    printf("Dequeued %d \n",dequeue());
    printf("Dequeued %d \n",dequeue());
    display();

    enqueue(40);
    display();

    return 0;
}