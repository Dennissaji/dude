//******profit and loss calculator******

#include<stdio.h>
void main()
{
 //cp=cost price and sp= selling price
 float  cp, sp,diff;

 printf("ENTER THE PURCHASE PRISE(CP):");
 scanf("%0.2f",&cp);
 printf("\n ENTER THE SELLING PRISE:");
 scanf("%0.2f",&sp);
 diff = sp-cp;
 if(diff>0)
 {
     printf(" \n you have earned a profit of RS %0.2f",diff);
 }
 else
 {
     printf(" \n you have lost RS %0.2f",diff);
 }
}