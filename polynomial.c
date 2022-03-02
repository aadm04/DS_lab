#include<stdio.h>
void main()
{
int a1[10][10],a2[20][20],n1,n2,a[20][20],i,j,k;
printf("Enter the no terms in first polynomial\n");
scanf("%d",&n1);
printf("Enter the no terms in second polynomial\n");
scanf("%d",&n2);
printf("Enter the coefficients and exponents of first polynomial\n");
for(i=1;i<=n1;i++)
 {
  for(j=1;j<=2;j++)
  scanf("%d",&a1[i][j]); 
 }
printf("Enter the coefficients and exponents of second polynomial\n");
for(i=1;i<=n2;i++)
 {
  for(j=1;j<=2;j++)
  scanf("%d",&a2[i][j]); 
 }
i=j=k=1;
while(i<=n1 && j<=n2)
{ 
 if(a1[i][2]>a2[j][2])
  {
   a[k][1]=a1[i][1];
   a[k][2]=a1[i][2];
   i++,k++;
  }
 else if(a1[i][2]<a2[j][2])
  {
   a[k][1]=a2[j][1];
   a[k][2]=a2[j][2];
   j++,k++;
  }
 else
  {
  a[k][1]=a1[i][1]+a2[j][1];
  a[k][2]=a1[i][2];
  i++,j++,k++;
  }
}
while(i<=n1)
 {
  a[k][1]=a1[i][1];
  a[k][2]=a1[i][2];
  i++,k++;
 }
while(j<=n2)
 {
  a[k][1]=a2[j][1];
  a[k][2]=a2[j][2];
  j++,k++;
 }
printf("A1:\n");
for(i=1;i<=n1;i++)
 {
  printf("\n");
  for(j=1;j<=2;j++)
  {
   printf("%d",a1[i][j]);
   printf("\t");
  } 
 }
printf("\nA2:\n");
for(i=1;i<=n2;i++)
 {
  printf("\n");
  for(j=1;j<=2;j++)
  {
   printf("%d",a2[i][j]);
   printf("\t");
  } 
 }
printf("\nResultant A:\n");
for(i=1;i<k;i++)
 {
  printf("\n");
  for(j=1;j<=2;j++)
  {
   printf("%d",a[i][j]);
   printf("\t");
  } 
 }
}
