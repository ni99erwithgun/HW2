#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j,k;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if ((k*k) == i * i + j * j)
				{
					printf("±×Ãä:%d,¨âÃä:%d,%d\n", k, j, i);
				}
			}
		}
	}
	system("pause");
	return 0;
}