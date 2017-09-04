#include <stdio.h>

int main(void)
{
	int num1, num2;
	int carryNum  = 0;
	int carryFlag = 0;
	scanf("%d %d", &num1, &num2);
	while (num1 || num2)
	{
	    carryNum  = 0;
        carryFlag = 0;
	    while(num1 || num2)
        {
            carryNum += num1%10 + num2%10;
            carryNum /= 10;
            num1     /= 10;
            num2     /= 10;
            if(carryNum)
                carryFlag++;

        }
        if(carryFlag == 0)
        {
            printf("No carry operation.\n");
        }if(carryFlag == 1)
        {
            printf("%d carry operation.\n", carryFlag);
        }if(carryFlag > 1)
        {
            printf("%d carry operations.\n", carryFlag);
        }

		scanf("%d %d", &num1, &num2);
	}
	return 0;
}
