#include <stdio.h>
#include <conio.h>
int main()
{
    float pay;
    int hour,i=1;
    while (i<=10) //Loop for 10 employes
    {
        printf("\n Enter no of hour work: ");
        scanf("%d",&hour);
        if (hour>=40)
        {
            pay=(hour-40)*120;
        }
        else
        {
        pay=0;
        }
        printf("Hours=%d Over time pay=Rs.%f",hour,pay);
        i++;
    }
    return 0;
}