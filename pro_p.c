#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int st[100];
int ind=-1;
void push(int x)
{
    ind++;
    if(ind==100)
    return;
    st[ind]=x;
}
void pop()
{
    if(ind==-1)
    return ;
    ind--;
}
int top()
{
    return st[ind];
}
int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    char tokens[100];
	    scanf("%s",tokens);
	    if(strcmp(tokens,"+")==0 || strcmp(tokens,"-")==0 || strcmp(tokens,"/")==0 || strcmp(tokens,"*")==0)
            {
                int x=top();
                pop();
                int y=top();
                pop();
                if(strcmp(tokens,"+")==0)
                {
                    push(x + y);
                }
                if(strcmp(tokens,"-")==0)
                {
                    push(y - x);
                }
                if(strcmp(tokens,"*")==0)
                {
                    push(x * y);
                }
                if(strcmp(tokens,"/")==0)
                {
                    push(y/x);
                }
            }
            else
            {
                int val = atoi(tokens);
                push(val);
            }
	}
	printf("%d",top());
	return 0;
}
