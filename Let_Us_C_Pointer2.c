#include <stdio.h>
int main()
{
    int i = 5,*j,**k;
    /*int *j = &i;
    int **k = &*j;*/
    j = &i;
    k = &j;
    printf("Address of i = %u\n",&i);
    printf("Address of i = %u\n",j);
    printf("Address of i = %u\n",*k);
    printf("Address of j = %u\n",&j);
    printf("Address of j = %u\n",k);
    printf("Address of k = %u\n",&k);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*(&i));
    printf("Value of i = %d\n",*j);
    printf("Value of j = %d\n",j);
    printf("Value of k = %d\n",k);
    
    return 0;
}