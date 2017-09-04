#include <stdio.h>

int cycle_length = 0;
void count(int);

int main(void)
{
	int i, j;
	int num1, num2, max_length = 0;
    while(scanf ("%d %d", &num1, &num2) != EOF)
    {
        if(num1 > num2)
        {
                int temp = num1;
                num1 = num2;
                num2 = temp;
                for(j=num1; j<=num2; j++)
                {
                    count(j);
                    if(cycle_length > max_length)
                        max_length = cycle_length;
                    cycle_length = 0;
                }
                printf("%d %d %d\n",num2 ,num1, max_length);
        }else
        {
            for(j=num1; j<=num2; j++)
            {
                count(j);
                if(cycle_length > max_length)
                    max_length = cycle_length;
                cycle_length = 0;
            }
            printf("%d %d %d\n",num1 ,num2, max_length);
        }
        max_length = 0;
    }

	return 0;
}

void count(int x)
{
	cycle_length++;
	while(1)
	{
		if(x == 1) break;
		if(x % 2 == 1)
		{
			x = 3 * x + 1;
			cycle_length++;
		}else
		{
			x = x / 2;
			cycle_length++;
		}
	}
}
