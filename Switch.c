#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 7;
    switch (i)
    {
    case 1:
        printf("I am in case 1\n");
        break;
    case 2:
        printf("I am in case 2\n");
        break;
    case 3:
        printf("I am in case 3\n");
        break;
    case 4:
        printf("I am in case 4\n");
        break;
    
    default:
        printf("I am in default");
        break;
    }
    return 0;
}