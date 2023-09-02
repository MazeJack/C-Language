#include <stdio.h>
int main()
{
    int arr[] = {12,1,5,8,6,45};
    // Base adderess type 

    //printf("%p\n",arr);      // Base address in a hexadecimal
    //printf("%u",arr);
    printf("The array Of a Base adderess Is : %d\n",arr);        // Base adderess
    printf("The array Of a Base adderess Is : %d\n",*(&arr));        
    printf("The array Of a Base adderess Is : %d\n",&arr);        
    printf("\n");

    // Add , Multipicaton , Divide , Subtraction In pointer
    printf("Incress a One   : %d\n",arr+1);        // This is an integer addition in pointer not a one add This line add a 4 because interger is a 4 byte
    printf("Incress a Two   : %d\n",arr+2);        
    printf("Incress a Three : %d\n",arr+3);        
    printf("Incress a Four  : %d\n",arr+4);        
    printf("\n");

    printf("Dicress a One  : %d\n",arr-1);        // This is an integer Subtraction in pointer not a one SUbtract This line sub a 4 because interger is a 4 byte
    printf("Dicress a Two   : %d\n",arr-2);        
    printf("Dicress a Three : %d\n",arr-3);        
    printf("Dicress a Four  : %d\n",arr-4);        
    printf("\n");

    for (int i = 0; i<6; i++){
        printf("%d ",arr[i]);
    }
    


    return 0;
}