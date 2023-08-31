// Reverse digits of a 5-digit number
#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b,c,d,e,reverse;
    printf("\n Enter the 5-digit number: ");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    n=n/10;
    reverse=a*10000+b*1000+c*100+d*10+e;
    printf("\n The reverse number is: %d\n",reverse);
    return 0;
}