/*
 *  Program to print pyramid having num1 steps
 *  Compilation : gcc -o pyramid_p.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment-1
*/
#include <stdio.h>
// function to print pyramid having num1 steps
void swap(int *num1)
{
    int space=*num1 - 1; // store count of ' ' before print
    int count_print=1; // count of '#' to print
    for(int i=1;i<=*num1;i++)
    {
        for(int j=1;j<=space;j++) // print spaces first
        {
            printf(" ");
        }
        for(int j=1;j<=count_print;j++) // print '#'
        {
            printf("# ");
        }
        space--; //decrement space count
        count_print++; // increment count_print count
        printf("\n");
    }
}
int main()
{
    int num1;
    printf("Enter number :- ");
    scanf("%d",&num1);
    // Parameter address of number
    swap(&num1);
    return 0;
}
