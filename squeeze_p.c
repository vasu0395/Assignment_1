/*
 *  Program to check string palindrome or not
 *  Compilation : gcc squeeze_p.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment 2
*/
#include <stdio.h>
// Program to squeeze s1 with respect to s2
void squeeze(char *s1,char *s2)
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
    
    //output string
    char ans[100];
    int low=0; // set lower index to 0
    for(int k=0;k<j;k++)
    {
        // if character of s2 not present in s1
        if(freq[(int)(*(s1 + k) - 'a')]==0)
        {
            ans[low++]=*(s1 + k);
        }
    }
    if(low==0)
	    printf("NILL");
    else
    printf("%s",ans);
}
int main() {
	//code
	char s1[100];
	char s2[100];
	printf("Enter string S1 ");
	scanf("%s",s1); // input s1
	printf("Enter string S2 ");
	scanf("%s",s2); // input s2
	printf("String after squeeze ");
	squeeze(s1,s2); // function to squeeze
	return 0;
}
