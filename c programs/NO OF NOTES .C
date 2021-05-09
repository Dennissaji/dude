// number of notes
#include <stdio.h>

int main()
{
    int amount, temp ;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    /* Initialize all notes to 0 */
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    /* Input amount from user */
    printf("Enter amount: ");
    scanf("%d", &amount);
    temp=amount;


    if(amount >= 500)
    {
        note500 = amount/500;
         amount=amount%500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount = amount%100;
    }
    if( amount >= 50)
    {
        note50 = amount/50;
        amount = amount%50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount = amount%20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
     printf("%d 500 notes + %d 100 notes + %d 50 notes + %d 20 notes + %d 10 notes =  %d ",note500,note100,note50,note20,note10,temp);
}
