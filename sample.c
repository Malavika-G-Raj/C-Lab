#include<stdio.h>
int f1(int);
void main()
{
 int a,c;
 printf("\n Enter the number\n");
 scanf("%d",&a);
 c= f1(a);
 printf("The value of a is %d ", c);
}
 int f1(int x)
{
 x=x+5;
 return(x);
}

