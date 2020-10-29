#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	for (i = 0; i < 3; i += 1)
	{
		if (i == 0||i==2)
		{
			printf("++++++++++\n");
		}
		else
		{
			printf("+        +\n");
		}
	}
	system("pause");
	return 0;
}