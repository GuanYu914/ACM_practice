#include <stdio.h>
#define _LENGTH 1024

int main(void)
{
	char input[_LENGTH];
	char *pinput = input;
	int i = 0;
	int flag = 0;
	int words = 0;
	while(fgets(input, _LENGTH, stdin))
	{
		i = 0;
		while(*(pinput + i) != '\0')
		{	
			if((*(pinput + i) >= 'A' && *(pinput + i) <= 'Z') || ((*(pinput + i) >= 'a' && *(pinput + i) <= 'z')))
			{
				flag = 1;
			}else
			{
				if(flag)
				{
					words++;
					flag = 0;
				}
			}
			i++;
		}
		printf("%d\n", words);
		words = 0;
	}
	return 0;
}
