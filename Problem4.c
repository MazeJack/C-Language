// Find the area of triangle, given its side
#include <stdio.h>
#include <math.h>
int main()
{
    float side,hight,area;
    printf("Enter a side: ");
    scanf("%f",&side);
    printf("Enter a hight: ");
    scanf("%f" ,&hight);
    area=side*hight/2;
    printf("Triangle area is a:%f\n",area);
    return 0;
}