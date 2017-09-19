#include <stdio.h>

float clockhands(int, int);

int main(void)
{
	int hours = 0;
	int min   = 0;
	while(1)
	{
		scanf("%d:%d", &hours, &min);
		if(!(hours || min))
            break;
        printf("%.3f\n", clockhands(hours, min));
	}
	return 0;
}

float clockhands(int h, int m)
{
	float h_angle = 0;
	float m_angle = 0;
	float angle = 0;
	h_angle = 30 * h + 0.5 * m;
	m_angle = 6 * m;
	angle = h_angle - m_angle;
	if(angle < 0)
        angle *= -1;
	return (angle > 180) ? (360 - angle) : angle;
}
