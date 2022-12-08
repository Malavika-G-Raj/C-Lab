#include <stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node
{
  int data;
  struct node *next;
};
struct node *f=NULL,*r=NULL,*temp;
int x;
void main()
{
    int choice;
    printf("\n\t 1.Enqueue\n\t 2.Dequeue\n\t 3.Display\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
while(choice!=4);
}
void enqueue()
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the element to be inserted");
        scanf("%d",&newnode->data);
    if(r==NULL)
    {
       f=r=newnode;
    }
    else
    {
        r->next=newnode;
        r=newnode;
    }
}
void dequeue()
{
    if(f==NULL)
    {
        printf("\n\t Queue is under flow");
    }
    else
    {
        temp=f;
        printf("\n\t The dequeued elements is %d",f->data);
        f=f->next;
        free(temp);
        if(f==NULL)
        {
            r=NULL;
        }
    }
}
void display()
{
    if(f==NULL)
    {
        printf("\n The Queue is empty \n");
    }
    else
    {
        printf("The elemnts in queue is:");
        temp=f;
      	while(temp!=NULL)
	{
  	 printf("%d\t",temp->data);
	temp=temp->next;
	}

    }
}
