#include<stdio.h>
int stack[100],n,top,x,t,choice;
void push();
void pop();
void display();
void main()
{
 top=-1;
 printf("\n Enter size of stack\n");
 scanf("%d",&n);
 printf("\n Choose the operation\n");
 printf("%n 1.PUSH \n 2.POP \n 3.DISPLAY\n 5. EXIT\n");
 do
{ 
 printf("\n Enter your choice\n");
 scanf("%d",&n);
 printf("\nEnter your choice\n");
 scanf("%D",&choice);
 switch(choice)
{
 case 1:
 {
  push();
  break;
 }
 case 2:
 {
 pop();
 break;
}
case 3:
{
 display();
 break;
}
case 4:
{
 
