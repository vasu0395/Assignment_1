/*
 *  Program to check string palindrome or not
 *  Compilation : gcc any_p.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment_1
*/
#include <stdio.h>
// Program to squeeze s1 with respect to s2
int any(char *s1,char *s2)
{
    int freq[26]={0}; // store frequency of character present in s2
    int i=0;
    // size of s2
    while(*(s2 + i)!='\0'){
    freq[(int)(*(s2 + i) - 'a')]++;
    i++;
    }
    
    int j=0;
    //size of s1
    while(*(s1 + j)!='\0'){
    j++;
    }
    

    for(int k=0;k<j;k++)
    {
        // if character of s2 present in s1
        if(freq[(int)(*(s1 + k) - 'a')]==1)
        {
            return k;
        }
    }
    return -1;
}
int main() {
	//code
	char s1[100];
	char s2[100];
	printf("Enter string s1 ");
	scanf("%s",s1); // input s1
	printf("Enter string s2 ");
	scanf("%s",s2); // input s2
	printf("Present index ");
	printf("%d",any(s1,s2)); // function to squeeze
	return 0;
}
