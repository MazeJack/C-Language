#include <stdio.h>
int main()
{
    int i = 3;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %u\n",&i);  // unsigned integer
    printf("The value of i is %d\n",i);
    printf("The value of i %d\n",*(&i));
}