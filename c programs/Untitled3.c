#include<stdio.h>
void main()
{
int totalrow,row,space,colom;

printf("ENTER NO ROWS: ");

scanf("%d",&totalrow);

for(row=1;row<=totalrow;row++)
{


for(space=1;space<=(totalrow-row);space++)
{
    printf(" ");
}

for(colom=1;colom<=totalrow;colom++)
    {
       printf("* ") ;
}

  printf("\n");
}
 }

