#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head,*temp,*ptr;
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deleteend();
void deletepos();
void display();
void main()
{
 int ch;
 printf("\n Operations\n 1.Insert beg 2.Insert end\n 3. Insert pos\n 4. Delete beg\n 5.Delete end\n 6.Delete pos\n 7.Display\n 8.Exit\n");
 do
 {
  printf("\n Enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insertbeg();
          break;
   case 2:insertend();
            break;
   case 3:insertpos();
          break;
   /*case 4:deletebeg();
          break;
   case 5:deleteend();
          break;
   case 6:deletepos();
          break;*/
   case 7:display();
          break;
   case 8:
          break;
   default:printf("\n Wrong input\n");
}
}while(ch!=0);
}
void insertbeg()
{
 struct node *newnode;
 newnode=malloc(sizeof(struct node));
 printf("\nEnter data\n");
 scanf("%d",&newnode->data);
 newnode->next=head;
 head=newnode;
 }
 void insertend()
 {
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("\nEnter data");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
 }
 void insertpos()
 {
     struct node *newnode;
     int pos,i=1;
     newnode=malloc(sizeof(struct node));
     printf("\n Enter the position\n");
     scanf("%d",&pos);
     printf("\nEnter the data\n");
     scanf("%d",&newnode->data);
     temp=head;
     while(i<pos)
     {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
     }
     
 }
 void display()
 {
     temp=head;
     while(temp!=NULL)
     {
         if(temp->next!=NULL)
         printf("%d->",temp->data);
         else
         printf("%d",temp->data);
         temp=temp->next;
     }
 }
            
