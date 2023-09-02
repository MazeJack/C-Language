#include <stdio.h>
int main()
{
    int i=3;

    switch (i)
    {
    case 0: /* constant-expression */
        /* code */
        printf("Hiiiii\n");

    case 1+2:
        printf("I am three\n");

    case 4/2:
         printf("I am two\n");
    }
    return 0;
}