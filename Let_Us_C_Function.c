#include <stdio.h>
#include <conio.h>
int calculate_sum(int x, int y, int z);  // veriable x , y and z is formal arguments
int main()
{
    int a,b,c,sum;
    printf("Enter  A , B and C: ");
    scanf("%d %d %d", &a, &b, &c);      // veriable a , b and c is actual arguments
    sum = calculate_sum(a,b,c);
    printf("Sum is %d ",sum);
    return 0;
}
int calculate_sum(int x, int y, int z)
{
    int d;
    d = x+y+z;
    return d;    
}                            /* All the following are valid return statemennts
                             return (a);    return a;
                             return (23);   return 23;
                             return;    Function can return one value at a time this is incorrect return (a,b) */
                             

 
          