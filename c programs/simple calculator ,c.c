#include <stdio.h>
int main()
{
 int a , b , addition , substraction , multiplication;
 float div ;
 printf("ENTER TWO NUMBERS");
 scanf("%d %d",&a ,&b);
 addition = a+b;
 substraction = a-b;
 multiplication = a*b;
 div=a/b;
 printf("\nsum = %d",addition);
 printf("\ndiffrence = %d", substraction);
 printf("\nproduct = %d",multiplication);
 printf("\nqutient = %f", div);
  return 0 ;
  }


