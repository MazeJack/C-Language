#include <stdio.h>
int main()
{
    int i;
    int a[5];
    int *p;
    p = &a[0];              // We can also Write &a or a
    for(i=0; i<=4; i++)
    {
        scanf("%d",p+i);
    }
    for(i=0; i<=4; i++)
    {
        printf("%d ",*p+i);
    }

    return 0;
}