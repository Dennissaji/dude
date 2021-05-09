#include<stdio.h>
void main()
{
int totalrow,row,space,colom,coeff;
printf("ENTER NO ROWS: ");
scanf("%d",&totalrow);

for(row=0;row<totalrow;row++)
{
for(space=1;space<(totalrow - row);space++)
{

printf(" ");
}

for(colom=0;colom<=row;colom++)
    {
       if(colom==0||row==0)
       {
           coeff=1;
           printf("%d",coeff);

       }
       else
        {
            coeff=coeff*(row-colom+1)/colom;
        printf(" %d",coeff); }

    }


  printf("\n");
}
}


