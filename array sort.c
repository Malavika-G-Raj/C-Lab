#include<stdio.h>
Void main()
{
 int a[100],m,i,temp;
 printf("\n Enter the size of arrays\n");
 scanf("%d %d",&m,&n);
 printf("\n Enter the elements of first array\n");
 for(i=0;i<m;i++)
{
 scanf("%d",a[i]);
}
 printf("\nthe sorted array is\n");
 if(a[i]>a[i+1])
{
 temp=a[i];
 a[i]=a[i+1];
 a[i]=temp;
}
for(i=0;i<m;i++)
{
 printf("%d %t", a[i]);
}
 

