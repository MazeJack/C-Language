// Find the area of triangle,3 side 
#include <stdio.h>
#include <math.h>
int main()                            
{
    float a,b,c,area,s;
    printf("Enter the a: ");
    scanf("%f",&a);
    printf("Enter the b: ");
    scanf("%f",&b);
    printf("Enter the c: ");
    scanf("%f",&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Triangle area is a: %f\n",area);
    return 0;
}