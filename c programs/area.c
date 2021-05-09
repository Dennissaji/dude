// program to find area of 1.traingle 2.square 3.rectangle
#include<stdio.h>
void main()
{
  int choice,con;
  float s1,s2, area;
  printf("ENTER THE LENGTH OF SIDES :");
  scanf("%f%f",&s1,&s2);
  do{
  printf("\n 1.TRAINGLE \n 2.SQUARE \n 3.RECTANGLE \n PLEASE ENTER YOUR CHOICE AND CONTINUE");
  scanf("%d",&choice);

//switch case
  switch(choice)
{
 case 1:

{
    // AREA OF TRAINGLE
   area = 0.5*s1*s2;
   printf("\narea of trainge with %0.2f and %0.2f as sides = %0.2f\n",s1,s2,area);
    break;
}

case 2:

{// AREA OF SQUARE
   if(s1==s2)
    {
     area = s1*s2;
     printf("area of square with %0.2f and %0.2f as sides = %0.2f\n",s1,s2,area);
    }
   else
   {
       printf("\n %0.2f not equal to %0.2f not a square \n",s1,s2);
   }
   break;
}
case 3:

{
  // AREA OF rectangle
   area = s1*s2;
   if(s1!=s2)
   {
    printf("\narea of rectangle with %0.2f and %0.2f as sides = %0.2f\n",s1,s2,area);
   }
  else
  {printf("side1:%0.2f = side2:%0.2f it is not a rectangle",s1,s2);}
  break;
}
default :
{
    printf(" error ");
}
}
printf("ENTER 1 TO CONTINUE OR 2 TO EXIT");
scanf("%d",&con);
  }while(con==1);
}

//end


