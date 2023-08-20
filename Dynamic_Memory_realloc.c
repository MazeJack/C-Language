#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // malloc,calloc,realloc,free
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no: %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d \n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }
    

    // Realloc
    printf("Enter the size of new array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no: %d of this array\n", i);
        scanf("%d", &ptr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d \n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }
    free(ptr);
    

    return 0;
}