#include<stdio.h>
#include<string.h>

int main()
{
    char input[1000];
	while(scanf("%s",input) != EOF)
	{	
		int i;
		for(i=0;i<strlen(input);i++)
		{
			printf("%c",input[i]-7);
		}
		printf("\n");
	}	
}
