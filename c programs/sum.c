// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main()
{
  int n, sum,k , a,fact=1;
  printf( "no of elements in array");
  scanf("%d",&n);
  int values[n];

  printf("\n Enter %d integers: ",n);

  // taking input and storing it in an array
  for(int i = 0; i < n; ++i)
{
     scanf("%d", &values[i]);
}



  // printing elements of an array
  for(int i = 0; i < n; i++)
{
      a = values[i];
 for (k=1;k<=a;k++)
 {
     fact=fact*k;
 }
     printf("FACTORIAL OF %d th element is %d",i,fact);

}


}




