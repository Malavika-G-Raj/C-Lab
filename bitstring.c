#include<stdio.h>
void main()
{
 int a[100],b[100],n;
 printf("\n Enter the size of set:");
 scanf("%d",&n);
 printf("\n Enter the set elements\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++)
 {
  if(a[i]%2==0)
  {
   b[i]=1;
  }
  else
  {
   b[i]=0;
  }
}
 printf("\n Bitsring of even elements:\n");
 for(int i=0;i<n;i++)
 {
  printf("%d \t",b[i]);
 }
}
