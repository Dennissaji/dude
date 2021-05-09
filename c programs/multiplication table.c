#include<stdio.h>
void main()
{
  int rows,coloms,i,j,product,choice;
  do{
  printf("ENTER NO OF ROWS: ");
  scanf("%d",&rows);
  printf("\nENTER NO OF COLOMS: ");
  scanf("%d",&coloms);

  for(i=1;i<=rows;++i)
{
  printf(" *********TABLE OF %d**********  \n  ",i);
  for(j=1;j<=coloms;j++)
  {
   product=i*j;
   printf("%d * %d = %d",i,j,product);
   if(j%5==0)
   {

       printf("\n");


   }
   else
   {
       printf(" ");
   }
   printf("  ");
   }
   printf("\n");

   }
      printf(" IF YOU WANT TO CONTINUE PRESS 1 TO EXIT PRESS 2 ");
     scanf("%d",&choice);
    }while(choice==1);
   }


