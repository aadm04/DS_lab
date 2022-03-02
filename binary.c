#include<stdio.h>
void main()
{
int a[100],c,s,i,n,f,l,m;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the integers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the no to search\n");
scanf("%d",&s);
f=0;
l=n-1;
m=(f+l)/2;
while(f<=l)
{
 if(a[m]<s)
 f=m+1;
 else if(a[m]==s) 
 {
  printf("%d is present in locaton %d\n",s,m+1);
  break;
 }
 else
 l=m-1;
 m=(f+l)/2;
}
if(f>l)
printf("%d is not present in array",s);
}
