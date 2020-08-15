/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10] = {11,7,9,16,21,4,15,98,67,31};
    int i,key;
    printf("Enter the key value:\n");
    scanf("%d", &key);
    for(i=0; i<10; i++)
        if(a[i] == key)
            break;
    if(i<10)
        printf("%d is found at the index %d",key,i);
    else
        printf("%d not found",key);
    return 0;
}
