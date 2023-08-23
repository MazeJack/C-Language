// Calculate Ramesh's gross salary
#include <stdio.h>
int main()
{
    float bs,da,hr,grpay;
    printf("\n Enter the Basic salary: ");
    scanf("%f",&bs);
    da=0.4*bs;
    hr=0.2*bs;
    grpay=bs+da+hr;
    printf("Basic salary= %f\n",bs);
    printf("Dearness allowance=%f\n",da);
    printf("House rent=%f\n",hr);
    printf("grpay is=%f\n",grpay);
    return 0;
}