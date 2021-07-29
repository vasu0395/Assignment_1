i/*
 * Program to check string T occurs end of string S or not.
 * Compilation : gcc end_p.c
 * Execution : ./a.out
 * @vasu , 1910990395 , 23/07/2021
 * Assignment 2
 */
#include <stdio.h>
// Program to check wheather string t present at end of string s or not
int strrindex(char *s,char *t) // parameter string
{
    int size_s=0; // intialize size of string s
    while(*(s + size_s)!='\0') // count size of string s
    size_s++;
    
    int size_t=0; // intialize size of string t
    while(*(t + size_t)!='\0') // count size of string t
    size_t++;
    
    // if size_t > size_s then it's impossible that string string t present at end
    if(size_t > size_s) 
    return 0;
    
    int temp=size_s - size_t; // finding size of desire string
    int low=0; // intialize check counter low with 0
    
    while(low + temp < size_s) // size_s must be greater than (low + temp)
    {
        if(*(s + temp + low)!= *(t + low)) // if both character not same
        {
            return 0; // return 0 as T not present at end
        }
        low++; // increase low by 1
    }
    return 1; // return 1 as it's present at end
}
int main() {
	//code
	char s[100]; // string S
	char t[100]; // string T
	printf("Enter string s ");
	scanf("%s",s); // input string s
	printf("Enter string t ");
	scanf("%s",t); // input string t
	// parameter string s and t
	printf("\n%d",strrindex(s,t)); // function  calling with return type int
	return 0;
}
