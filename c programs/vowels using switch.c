#include<stdio.h>
#include<ctype.h>
void main()
{
char c,d;
printf("ENTER AN alphabet");
scanf("%c",&c);
d = toupper(c);

switch(d)

 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
          printf("vowel");
          break;
default:printf("consonent");
 }
}





