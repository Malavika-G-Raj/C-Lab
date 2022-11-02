#include<stdio.h>
void main()
{
 int a[100],m,i,j,temp;
 printf("\n Enter the size of arrays\n");
 scanf("%d",&m);
 printf("\n Enter the elements of first array\n");
 for(i=0;i<m;i++)
{
 scanf("%d",&a[i]);
}
 printf("\nthe sorted array is\n");
for(i=0;i<m;i++)
{
 for(j=i+1;j<m;j++)
{
 if(a[i]>a[j])
{
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
}
printf("%d \t", a[i]);
}
}

 

