/*
 *  Program to check string palindrome or not
 *  Compilation : gcc -o string_p.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment 1_C
*/
#include <stdio.h>
#include <stdbool.h> // header file for bool function
// Program to check string palindrome or not
bool is_palindrome(char *s) // Parameter : string  return_type : bool
{
    int i=0; 
    // finding size of string s
    while(*(s + i)!='\0')
    {
	i++;
    }
	
    int low=0;
    int high=i-1;
    // check weather low index character equal to  high index character
    while(low<=high)
    {
        if(*(s + low)!=*(s + high)) // if not equal return false
	    return false;
	low++;
	high--;
    }
    return true; // return true if palindrome
}
int main() {
    printf("Enter String ");
    char s[100];
    scanf("%[^\n]",s); // input string s
    char new_s[100];
    int i=0;
    // finding string size 
    while(s[i]!='\0')
    {
        i++;
    }
    // convert string to lower case with ignore all space
    int low=0;
    for(int j=0;j<i;j++)
    {
        if(s[j]>='a' && s[j]<='z')
	new_s[low++]=s[j];
	else if(s[j]>='A' && s[j]<='Z')
	new_s[low++]=(char)(s[j] + 32);
	else if(s[j]>='0' && s[j]<='9')
	new_s[low++]=s[j];
    }
    // check for palindrome or not
    if(is_palindrome(new_s))
    printf("True");
    else
    printf("False");
    return 0;
}
