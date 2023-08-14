#include <stdio.h>
int sum(int a,int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int takenumber()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    return i;
}
/*int sum(int a , int b)
{
    return a+b;
}*/
int main()
{
    int a,b,c;
    a = 9;
    b = 87;
    // c = sum(a,b);
    c = takenumber();
    printstar(7);
    // printf("\nThis sum is: %d ",c);
    printf("\nThe number is: %d ",c);
    return 0;
}
int sum(int a , int b)
{
    return a+b;
}
