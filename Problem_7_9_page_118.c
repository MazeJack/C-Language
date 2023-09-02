/* 1: Factorial of a number
   2: Prime or not
   3: Odd or Even
   4: Exit */


#include <stdio.h>
#include <conio.h>
int main()
{
    int choice,num,i,fact;
    while (choice)
    {
        printf("\n1. Find a factorial \n");
        printf("2. Prime or not\n");
        printf("3. Odd or Even\n");
        printf("4.Exit\n");
        printf("Enter a choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: \n");
            scanf("%d",&num);
            fact=1;
            for ( i = 1; i<=num; i++)
                fact = fact*i;
                printf("Factorial value is = %d\n",fact);
            
            break;
        
        case 2:
            printf("Enter a number\n");
            scanf("%d",&num);
            for ( i = 2; i <= num; i++)
            {
            if (num%i==0)
            {
                printf("Not a prime number\n");
                break;
            }
            }
            if (i==num)
            {
                printf("Prime number\n");
            }
            break;

        case 3:
            printf("Enter a number: \n")    ;
            scanf("%d",&num);
            if (num%2==0)
            {
                printf("Number is a Even");
            }
            else
            printf("number is a Odd");
            break;
            
        case 4:
         exit(0) ;

         default :
          printf("Wrong choice");
            
            
        }
    }
    return 0;
}
