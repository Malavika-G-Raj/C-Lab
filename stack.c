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
 exit(0);
break;
default:
printf("Soory, Please enter a valid choice!\n");
break;
}
}while(your_choice!=4);
return 0;
}
void push()
{
int value;
if(top == SIZE- 1)
{
printf("The Stack is empty!\n");
}
else
{
printf("Enter the element to push into the stack: ");
scanf("%d", &value);
printf("Element added!\n");
top++;
stack[top]=value;
}
}
void pop()
{
int value;
if(top == -1)
{
printf("The Stack is empty!\n");
}
else
{
value=stack[top];
printf("Deleted the element: %d\n",stack[top]);
print("Deleted!\n");
top--;
}
}

void display()
{
if(top == -1)
{
printf("The Stack is empty!\n");
}
else if(top > 0)
{
printf("Elements of the stack are: \n");
for(a = top; a >= 0; a--)
{
printf("%d\n",stack[a]);
}
}
}
 
