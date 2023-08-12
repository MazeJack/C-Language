#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum, digit, temp;

    num = 1;
    while (num <= 500)
    {
        sum = 0;
        temp = num;

        while (temp != 0)
        {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if (num == sum)
        {
            printf("%d is an Armstrong number.\n", num);
        }

        num++;
    }

    return 0;
}
