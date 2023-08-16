// Reverse array

#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[] = {56, 85, 65, 98, 36, 85};
    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", arr[i]);
    
    
    /*for (int j = 5; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }*/
    
    sum = sum + arr[i];
    }
    printf("\n%d",sum);
    return 0;
}