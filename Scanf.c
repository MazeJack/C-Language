#include <stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter the value of p: ");
    scanf("%d",&p);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%f",&r);
    si=p*n*r/100;
    printf("%f\n",si);
    return 0;
}