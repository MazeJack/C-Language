


#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a alphabet a, b and c \n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("A for a apple\n");
        break;
    case 'b':
    case 'B':
        printf("B for a boat\n");
        break;
    case 'c':
    case 'C':
        printf("C for a cat");
    
    default:
        break;
    }
    return 0;
}
