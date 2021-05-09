// *******SIMPLE CALCULATOR******
#include<stdio.h>
void main()
{
 int choice,s;
 float a,b,sum,diffrence,product,quotient;
 do{

 printf(" 1.ADDITION\n 2. SUBSTRACTION\n 3. multiplication\n 4. division\n PLEASE SELECT YOUR CHOICE AND CONTINUE\n");
 scanf("%d",&choice);
 printf("enter any two digits\n");
 scanf( "%f %f",&a,&b);

 // SWITCH CASE STATEMENT

switch(choice)
{
  case 1:
     {
      sum=a+b;
      printf("\n %0.3f + %0.3f = %0.3f",a,b,sum);
      break;

    }
  case 2:
    {
      diffrence=a-b;
      printf("\n %0.3f - %0.3f = %0.3f",a,b,diffrence);
      break;

    }
  case 3:
    {
      product=a*b;
      printf("\n %0.3f * %0.3f = %0.4f",a,b,product);
      break;
    }
  case 4:
    {
        quotient=a/b;
        printf("\n %0.3f / %0.3f = %0.4f ",a,b,quotient);
        break;
    }
 default:
    {
        printf("\n ERROR");
    }
}
    printf("\n do you wish to continue press 1 or no press 2");
    scanf("%d",&s);
 }
  while(s==1);
}



//END


