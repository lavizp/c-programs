#include <stdio.h>

void main() {
    int i, n, coeven=0, codd=0, num[25];
    printf("Enter required number: ");
    scanf("%d",&n);
    printf("Enter %d numbers \n",n);
    for (i = 0; i<n; i++)
    scanf("%d",&num);

    for (i=0; i<n; i++)
    {
        if (num[i]%2==0)
        {
            coeven++;
        }
        else{
            codd++;
        }
    }
    printf("Total no. of even number: %d",coeven);
    printf("\nTotal no. of odd number: %d",codd);
}