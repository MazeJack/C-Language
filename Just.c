// Calculation of simple interest
#include <stdio.h>
int main()
{
    int p,n,r,si;
    printf("Enter a p: ");
    scanf("%d",&p);
    printf("Enter a n: ");
    scanf("%d",&n);
    printf("Enter a r: ");
    scanf("%d",&r);
    // Formula for simple interest
    si=p*n*r/100;
    printf("The simple interest: %d",si);
    return 0;
    }