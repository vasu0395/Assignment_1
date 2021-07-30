/* Execution : gcc fun.c
 * compilation : ./a.out
 * Program to print all line having characters more than 80.
 * @vasu , 1910990395 , 30/07/2021
 * Assignment_1 - C
 */

#include <stdio.h>
int main() {
	
    // file pointer
    FILE *fptr;
    // fopen function to open file and "r" is for reading only
    fptr = fopen("tick.txt","r"); // tick.txt is in current folder as of this program
    printf("Output of Program\n");
    // fptr return NULL if unable to open
    if (fptr == NULL) {
	    printf("unable to  open file \n");
            return 0;
    }

    char curr_char;
    // Run untill EOF (end of file) reached as EOF is terminating
    while(curr_char !=EOF)
    {
        // set inital length 0
	int len = 0;
	// creating string of max length 500
	char temp[500];
	//  fgetc return EOF when end of file reached else return character currently pointed
	curr_char=fgetc(fptr);
	// since we have max length (by default) 500 and also '\n' character current line end and EOF if we reached file end
	for(len=0;len<500 && curr_char!='\n' && curr_char!=EOF;len++)
	{
	    // store in temporary string
	    temp[len] = curr_char;
	    // pos point to next character
	    curr_char=fgetc(fptr);
	}
		
	// if length equal 80
	if(len > 80)
       	{
	    // print current string
	    for(int i = 0; i < len; i++)
	    {
	        printf("%c", temp[i]);
 	    }
	    printf("\n");
	}
		
    }
    // fclose to close file
    fclose(fptr);
    return 0;
}
