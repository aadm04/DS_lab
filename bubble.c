#include<stdio.h>
void main()
{
int a[100],i,j,temp=0,n;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the integers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
}
printf("Sorted array:\n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
printf("\n");
}}
