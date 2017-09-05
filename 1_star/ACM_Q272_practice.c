#include <stdio.h>

int main(void)
{
	int i = 0;
	int flag = 0;
	char input;
	while(scanf("%c", &input) != EOF)
	{
		if(input == '"')
		{		
			if(!flag)
			{
				printf("%c%c", '`', '`');
				flag = 1;
			}
			else
			{
				printf("%c%c", '\'', '\'');
				flag = 0;
			}
		}else
		{	
			printf("%c", input);
		}	
	}
	return 0;
}
