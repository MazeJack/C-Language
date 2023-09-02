#include <stdio.h>
int main()
{
    int n,m;
    void display1(int);
    void display2(int*);
    int arr[]={55,88,89,45,75,15,22};
    for (int i = 0; i<=6; i++)
    {
        display1(arr[i]);
    }
     for (int i = 0; i<=6; i++)
    {
        display2(&arr[i]);
    }
   return 0;
}
   void display1 (int n);{
   
    printf("%d", n);
   }
   void display2 (int *m);{
   
   printf("%d", *m);
   }

    

