#include<stdio.h>
int main()
{
 int s[50][50],m,n,i,j,size=0;
 printf("Enter the number of rows \n");
 scanf("%d",&m);
 printf("Enter the number of columns\n");
 scanf("%d",&n);
 printf("Enter the matrix\n");
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 scanf("%d",&s[i][j]);
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 if (s[i][j]!=0)
 size++;
 int ma[size][3], k=0;
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 if(s[i][j]!=0)
 {
  ma[k][0]=i;
  ma[k][1]=j;
  ma[k][2]=s[i][j];
  k++;
 }
 printf("Row\t");
 printf("Column\t");
 printf("Value\n");
 for(i=0;i<size;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d",ma[i][j]);
   printf("\t");
  }
  printf("\n");
 }
 return 0;
}
