#include <stdio.h>

int main(void)
{
        int i, set, sum, base, moveNum, setFlag;
        set = 0;
        setFlag = 0;
        while(scanf("%d", &set) && set)
        {
                int data[set];
                sum = 0;
                base = 0;
                moveNum = 0;
                for(i = 0; i< set; i++)
                {
                        scanf("%d", &data[i]);
                        sum += data[i];
                }
                base = sum / set;

                for(i = 0; i< set; i ++)
                {
                        if(data[i] - base > 0)
                                moveNum += (data[i] - base);
                }
                printf("Set #%d\n", ++setFlag);
                printf("The minimum number of moves is %d.\n\n", moveNum);

        }
        return 0;
}
