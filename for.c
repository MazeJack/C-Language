#include <stdio.h>
int main()
{
    int p,n,count;
    float r,si;
    for ( count = 1; count<=3; count=count+count)
    {
        printf("Enter a value of p,n and r: ");
        scanf("%d %d %f",&p,&n,&r);
        si=p*n*r/100;
        printf("Simple interest=Rs.%f\n",si);

    }
    return 0;
}