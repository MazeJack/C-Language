// Conversion distance
#include <stdio.h>
int main()
{
    float km,m,cm,ft,inc;
    printf("\n Enter the distance in km: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inc=cm/2.54;
    ft=inc/12;
    printf("\n Distance in m=%f",m);
    printf("\n Distance in cm=%f",cm);
    printf("\n Distance in ft=%f",ft);
    printf("\n Distance in inc=%f",inc);
    return 0;
}