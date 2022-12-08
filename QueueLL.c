#include <stdio.h>
#include<stdlib.h>
int front,rear,n,c;
int a[10];
void enqueue(int x)
{
    if((rear+1)%n==front)
    printf("queue overflow");
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        a[rear]=x;
    }
    else
    {
        rear=(rear+1)%n;
        a[rear]=x;
    }
    
    
}
void dequeue()
{
    if(front==-1 && rear==-1)
    printf("queue underflow");
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("the deleted element is: %d",a[front]);
        front=(front+1)%n;
    }
}
void display()
{
    int i;
  for(i=front;i!=rear;i=(i+1)%n)
  {
    printf("%d\n",a[i]);
  }
  printf("\n%d",a[i]);
}

void main()
{
    int x,c;
    front=rear=-1;
    printf("enter the size of queue");
    scanf("%d",&n);
    
    while(1)
    {
        printf("enter choice \n1.enqueue\n 2.dequeue \n3.display\n4.exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
            printf("enter value:");
            scanf("%d",&x);
            enqueue(x);
            }
            break;
            case 2:
            dequeue();
            break;
            case 3:display();
            break;
            case 4:
            exit(0);
        }
    }
   
    
}
