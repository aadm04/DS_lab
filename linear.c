#include<stdio.h>
void main()
{
int a[100],x,i,n;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the integers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the no to search\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
 if(a[i]==x)
 {
  printf("%d is present in locaton %d\n",x,i+1);
  break;
 }
}
if(i==n)
printf("%d is not present in array",x);
}
