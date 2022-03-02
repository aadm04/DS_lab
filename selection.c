#include<stdio.h>
void main()
{
int a[100],i,j,temp=0,n,min;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the integers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 min=i;
 for(j=i+1;j<n;j++)
 {
  if(a[j]>a[min])
  min=j;
 } 
   temp=a[i];
   a[i]=a[min];
   a[min]=temp;
}
printf("Sorted array:\n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
printf("\n");
}}
