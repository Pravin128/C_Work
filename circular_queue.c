#include <stdio.h>
void enqueue(int x);
void dequeue();

int rear = -1, front = -1, q[5], size = 5, i, x;

void enqueue(int x)
{
    if (rear == -1 && front == -1)
    {
        rear = 0;
        front = 0;
        q[rear] = x;
    }
    else if ((rear + 1) % size == front)
    {
        printf("\nQueue is full\n");
    }
    else
    {
        rear = (rear + 1) % size;
        q[rear] = x;
    }
}
void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        printf("element dequeued is %d ", q[front]);
        rear = -1;
        front = -1;
    }
    else
    {
        printf("%d is dequeued ", q[front]);
        front = (front + 1) % size;
    }
}
void display()
{
    if (rear == -1 && front == -1)
    {
        printf("queue is empty \n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d \t ", q[i]);
        }
    }
}
void main()
{
    int choice, ch;
    do
    {
        printf("1.enter element \n2.Delete element\n3.Display queue\n enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter element ");
            scanf("%d", &x);
            enqueue(x);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
        }
        printf("\ndo u want to continue ? ");
        scanf("%d", &ch);
    } while (ch == 1);
}
