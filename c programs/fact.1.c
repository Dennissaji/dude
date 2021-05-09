#include<stdio.h>
void main()
{
 printf("***********factorial of a number**********");
  int n,fact,i;
  fact=1;
  printf("\nenter the number:");
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    fact=fact*i;
    printf("%d * ",i);
    }
    printf(" =  %d",fact);
    }
