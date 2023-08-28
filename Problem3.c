// Calculation of aggregate & percentage marks
#include <stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,am;
    float pr;
    printf("\n Enter marks in 5 subject: ");
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    am=a1+a2+a3+a4+a5;
    pr=am/5;
    printf("Aggregate marks=%d\n",am);
    printf("Percentage marks=%f\n",pr);
    return 0;
}