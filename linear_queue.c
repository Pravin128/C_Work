#include <stdio.h>
#define SIZE 5
void enQueue();
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1,x;

int main() {
    
    do{
        printf("\n\tenter your choice");
        printf("\n1:insert\n2:delete\n3:display\n4:exit\n");
        scanf("%d",&x);
        
        switch(x)
        {
            case 1:  
            enQueue();
            break;
            
            case 2:
            deQueue();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            printf("exited");
            break;
            
        }
    }while(x!=4);
        
    
    
  

  return 0;
}

void enQueue() {
    int value;
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    printf("enter the value");
    scanf("%d",&value);
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void deQueue() {
  if (front == rear)
    printf("\nQueue is Empty!!");
  else {

    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
