#include <stdio.h>
int fact(int num);
int main()
{
    int num;
    int factorial;
    printf("Enter a number find a factorial: ");
    scanf("%d",&num);
    factorial = fact(num);
    printf("The factorial %d is %d",num,factorial);
    return 0;
}
int fact(int num)
{
    int i;
    int factorial = 1;
    for ( i = 1; i<=num; i++)
    
        factorial = factorial*i;
        return (factorial);
    
}