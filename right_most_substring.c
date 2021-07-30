/*
 *  Program to find right most occurrence of s1 in s2
 *  Compilation : gcc right_most_substring.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment 1_c
*/
#include <stdio.h>
// Program to find right most occurrence of s1 in s2
int strrindex(char *s1, char *s2)
{
    int M=0;
    int N=0;
    
    // store size of s1
    while(*(s1 + M)!='\0')
    M++;
    // store size of s2
    while(*(s2 + N)!='\0')
    N++;
    
    // check from rightmost possible substring
    for (int i = N - M; i >=0 ; i--) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j]) // if not equal
                break;
           if (j == M) // if equal return index
              return i;
    }
    return -1; // not present in entire string
}
int main() {
    char s1[100];
    char s2[100];
    printf("Enter string ");
    scanf("%s",s1);
    printf("Enter substring ");
    scanf("%s",s2);
    printf("Output : ");
    printf("%d",strrindex(s2,s1));
    printf("\n");
    return 0;
}
