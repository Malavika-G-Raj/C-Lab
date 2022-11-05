#include<stdio.h>
void main()
{
 int a[100],b[100],c[100],n,m,i,j;
 printf("Enter size of array\n");
 scanf("%d %d",&n,&m);
 printf("\n Enter first array elemnts\n");
 for(i=0;i<m;i++)
{
 scanf("%d",&a[i]);
 c[i]=a[i];
}
 j=i;
 printf("\n Enter 2 nd array elemnts\n");
 for(i=0;i<n;i++)
{
 scanf("%d",&b[i]);
 c[j]=b[i];
 j++;
}
 printf("\n The new array\n");
 for(i=0;i<j;i++)
{
 printf("%d \t",c[i]);
}
}
