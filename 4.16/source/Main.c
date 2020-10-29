#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j, t=0,t2=0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n");
	for (i = 9; i > -1; i--)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
	printf("\n");
	for (i = 10; i > 0; i--)
	{
		t2 = t;
		while (t2 > 0)
		{
			printf(" ");
			t2--;
		}
		t++;
		for (j = 0; j < 10; j++)
		{
			if (i >j)
			{
				printf("*");
			}

		}
		
		printf("\n");
	}
	printf("\n");
	t = 9;
	for (i = 9; i > -1; i--)
	{
		t2 = t;
		while (t2 > 0)
		{
			printf(" ");
			t2--;
		}
		t--;
		for (j = 0; j < 10; j++)
		{
			if (i <=j)
			{
				printf("*");
			}

		}

		printf("\n");
	}
	system("pause");
	return 0;
}