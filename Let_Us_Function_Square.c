#include <stdio.h>
float square(float x);
int main()
{
    float a, b;
    printf("Enter a number: \n");
    scanf("%f", &a);
    b = square(a);
    printf("The square is %f to %f", a, b);
    return 0;
}
float square(float x)
{
    float c;
    c = x * x;
    return c;
}