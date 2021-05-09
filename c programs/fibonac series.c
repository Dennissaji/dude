#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1;
    int next;
    next = t1+t2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);


      i=1;
    /*LOOP EXECUTE ONLY IF N IS GREATER THAN 2*/

        while(i<=n)
        {
        printf("%d, ",t1);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
        i=i+1;
    }
    return 0;
}
