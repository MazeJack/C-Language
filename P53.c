#include <stdio.h>
#include <conio.h>
int main()
{
    float x,power;
    int y,i;
    printf("Enter a Two Number: ");
    scanf("%f %d",&x,&y);
    power=i=1;
    while (i<=y)
    {
      power=power*x;
      i++;
    }
    printf("%f to the power %d is %f\n",x,y,power);
    return 0;
}