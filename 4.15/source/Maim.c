#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float m = 5000,r=0;
	int  i,t=0;
	while (t < 5)
	{
		m = 5000;
		for (i = 0; i < 15; i++)
		{
			if (t == 0)
			{
				r = 1.1;
				m = m * r;
			}
			if (t == 1)
			{
				r = 1.105;
				m = m * r;
			}
			if (t == 2)
			{
				r = 1.11;
				m = m * r;
			}
			if (t == 3)
			{
				r = 1.115;
				m = m * r;
			}
			if (t == 4)
			{
				r = 1.12;
				m = m * r;
			}
			
		}
		t++;
		printf("Rate=%f:%f\n",r*10, m);
	}
	system("pause");
	return 0;
}