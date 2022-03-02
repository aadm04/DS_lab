#include<stdio.h>
void main()
{
int a[100],i,j,n,val;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the integers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
 val=a[i];
 for(j=i-1;j>=0;j--)
 {
  if(val<a[j])
   a[j+1]=a[j];
  else
  break;
 }
  a[j+1]=val; 
}
printf("Sorted array:\n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
printf("\n");
}}
