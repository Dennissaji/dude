// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main() {
    int n, sum;
  printf( "no of elements in array");
  scanf("%d",&n);
  int values[n];

  printf("\n Enter %d integers: ",n);

  // taking input and storing it in an array
  for(int i = 0; i < n; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < n; ++i) {
     printf("value of %d element is :%d\n", i,values[i]);
     sum = sum+values[i];

  }

  printf("sum of elements of array is %d",sum);
}



