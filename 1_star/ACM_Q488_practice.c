
#include <stdio.h>

int main(void)
{
	int h, i, j, k = 0;
	int set = 0;
	while(scanf("%d", &set) != EOF)
	{
		int Amp[set];
		int Feq[set];
		for(i = 0; i < set; i++)
		{
			scanf("%d", &Amp[i]);
			scanf("%d", &Feq[i]);
		}
		for(h = 0; h < set; h++)
		{
			for(i = 0; i < Feq[h]; i++)
			{
				for(j = 0; j < Amp[h]; j++)
				{
					for(k = 0; k < j + 1; k++)
					{
						printf("%d", j + 1);
					}
					printf("\n");
				}
				for(j = Amp[h]; j > 1; j--)
				{
					for(k = j; k > 1; k--)
					{
						printf("%d", j - 1);
					}
					printf("\n");
				}
                    if(!((h == set - 1) && (i == Feq[h] - 1)))
                    printf("\n");
			}
		}
	}
	return 0;
}
