#include<stdio.h>
void main()
{
  int n,i,j,space;
  printf("enter the number of rows:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
for(space=1;space<=(n-i);space++)
{
    printf("    ");
}
for (j=1;j<=(2*i+1);j++)
{
 printf(" %d ",(i+j/2));

 }
 printf("\n");
 }
 }
