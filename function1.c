#include<stdio.h>
void f1();
int a=5,b=10,c;
void main()
{
 c=a+b;
 f1();
}
void f1()
{
 printf("\nThis is my first function\n");
 printf("Value of C %d\n",c);
}
