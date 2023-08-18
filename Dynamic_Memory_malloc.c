#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // malloc,calloc,realloc,free
int main()
{
    int * ptr;
    int n;
    printf("Enter the size of array you want to create: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no: %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",ptr[i]);
       // scanf("%d",&ptr[i]);
    }
    
    return 0;
}