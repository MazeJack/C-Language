#include <stdio.h>
int main()
{
    int avg,sum=0,i;
    int marks[30]; // array declaration
    for (int i = 0; i<=29; i++)
    {
        printf("Enter a mark: ");
        scanf("%d",marks[30]);  // Store data in an array
    }
    for (int i = 0; i<=29; i++)
    {
        sum = sum + marks[i];
        avg = sum/30;
        printf("Average marks = %d\n",avg);
    }
    
    return 0;
}