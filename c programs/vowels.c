            // PROGRAM TO FIND OUT A GIVEN CHARACTER IS VOWEL OR CONSONENT
#include<stdio.h>
void main()
{
  char letter;
  printf("ENTER ANY ALPHABET:");
  scanf("%c",&letter);

                // ELSE IF LADDER

  if(letter ==' a'|| letter == 'e'|| letter == 'i'|| letter =='o' || letter == 'u')
  {
     printf("\n %c is a vowel of lower case",letter);
   }
   else if( letter == 'A'|| letter == 'E'|| letter == 'I'|| letter == 'O'|| letter == 'U')
   {
    printf("\n %c is a vowel of upper case",letter);
   }
   else
    {
      printf("\n %c is a consonant",letter);
    }
 }
