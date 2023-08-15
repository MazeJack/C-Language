//The concept of While loop


/* Tips and Traps 
Almost always the while must test a condition that will eventually bacome false, other wise the loop would keep getting executed 
forever indefinitely*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int p,n,count;
    float r,si;
    count=1; // The variable count is often called either a 'loop counter' or an 'index variable'
    while (count<=3)
    {
        printf("\n Enter a value of p,n and r");
        scanf("%d %d %f",&p,&n,&r);
        si=p*n*r/100;
        printf("Simple interest=Rs.%f",si);
        count=count+1;
    }
    return 0;
}

/*int main()
{
    int i=1; // i always remains equal to 1
while(i<=10)
{
    printf("%d\n",i);
    i=i+1;

}
    return 0;
}*/



