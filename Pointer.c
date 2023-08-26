#include <stdio.h>
int main()
{
    printf("Lets learn abhout pointer\n");
    int a = 52;
    int *ptra = &a;
    int *ptr = NULL;
    printf("The address of a pointer to a is %p\n", &ptra);   // %x is use to hexadecimal value
    printf("The address of a is %p\n",ptra);                   // %x is use to hexadecimal value
    printf("The value of a is %p\n",*ptra);                   // %p Pointer print 
    printf("The value of a is %d\n",a);                  
    printf("The value of a is %d\n",a);
    printf("The NULL Pointer value is %p",ptr);
    return 0;
}