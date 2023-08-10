#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        for (int j=1 ; j<=n-i;j++)
        {
        printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("*");
        }
        for (int l=1; l<=i*2-2; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
     for (int i = n; i>=1; i--)
    {
        for (int j=1 ; j<=n-i;j++)
        {
        printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("*");
        }
        for (int l=1; l<=i*2-2; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
 
    return 0;
    
}