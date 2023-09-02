#include <stdio.h>
#include <math.h>

void update(int *a, int *b)
{
    // Complete this function
    int i, j;
    i = *a + *b;
    j = abs(*a - *b); // In a abs function is always given a positive answer
    *a = i;
    *b = j;
}

int main()
{
    int a, b, sum;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}