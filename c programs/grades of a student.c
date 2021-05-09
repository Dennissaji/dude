// program for obtaining grades of a student

#include <stdio.h>
int main()
{   // varaible declaration

     int mark1,mark2,mark3,x;
     //input output
     printf("\n 1 for maths\n 2 for science\n 3 for ss\n");
     scanf("%d",&x);
     printf("%d",x);

     //conditions

// 1. maths
if(x == 1)

       {
        printf("\nenter marks of maths :");
        scanf("%d",&mark1);



    if(mark1>90)

    printf("student get A+ in maths");
    else if(mark1>80)
    printf("student get A in maths");
    else if(mark1>70)
    printf("student B+ in maths");
    else
    printf("student get B in maths");
     }

// 2. science

else if(x==2)
     {
         printf("\nenter marks of science :");
          scanf("%d",&mark2);

    if(mark2>90)
    printf("student get A+ in science");
    else if(mark2>80)
    printf("student get A in science");
    else if(mark2>70)
    printf("student B+ in science");
    else
    printf("student get B in science");
}
// 3. maths

else if(x==3)
     {
         printf("\nenter marks of ss :");
          scanf("%d",&mark3);

    if(mark3>90)
    printf("student get A+ in ss");
    else if(mark3>80)
    printf("student get A in ss");
    else if(mark3>70)
    printf("student B+ in ss");
    else
    printf("student get B in ss");
}
else
{
    printf("invalid entry");
}
}
