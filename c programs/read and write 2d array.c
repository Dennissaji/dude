#include <stdio.h>
void main()
{
 int rows,coloms,i,j;
 printf(" enter no of rows and coloms:");
 scanf("%d %d",&rows,&coloms);
 int arr[rows][coloms];
 // read the matrix
 printf(" enter the elements of matrix \n");
 for(i=0;i<rows;i++)
 {

     for(j=0;j<coloms;j++)
     {
         scanf("%d",&arr[i][j]);

     }
                }

for(i=0;i<rows;i++)
{
    for(j=0;j<coloms;j++)
    {
        printf("%d ",arr[i][j]);
    }
 printf("\n");
}
}



