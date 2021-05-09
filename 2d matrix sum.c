//*********************** 2D MATRIX SUM OF ROWS**********//

#include <stdio.h>
void main()
{
 int rows,coloms,i,j,l,m,sum=0;
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

  // operations on matrix

for(l=0;l<rows;l++)
{
    for(m=0;m<coloms;m++)
    {
        sum = sum + arr[l][m];
    }
    printf("sum of elements of %d row is %d \n",l,sum);
    sum=0;
}
// printing the matrix

for(i=0;i<rows;i++)
{
    for(j=0;j<coloms;j++)
    {
        printf("%d ",arr[i][j]);
    }
 printf("\n");
}
}



