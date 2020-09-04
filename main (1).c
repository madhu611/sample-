/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Enter x and y\n");
    int x,y;
    scanf("%d\n%d",&x,&y);
    printf("Before Swapping \nx = %d \ny = %d\n",x,y);
    printf("After Swapping without a third variable\nx = %d \ny = %d",y,x);

    return 0;
}
