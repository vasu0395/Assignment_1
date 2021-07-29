/*
 *  Program to swap two number
 *  Compilation : gcc -o swap_p.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment_1 - C
*/
#include <stdio.h>
// function to perform swap operation
void swap(int *num1,int *num2)
{
    *num1=*num1 + *num2; 
    *num2=*num1 - *num2; 
    *num1=*num1 - *num2; 
}
int main()
{
    int num1,num2;
    printf("Enter Two numbers :- ");
    scanf("%d %d",&num1,&num2);
    printf("Number before Swap a= %d , b=%d ",num1,num2);
    // Parameter address of num1 and num2
    swap(&num1,&num2); 
    printf("\nNumbers After Swap operation a= %d , b= %d ",num1,num2);
    return 0;
}
