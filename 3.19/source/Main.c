#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	float pr = 0, days = 0, rate = 0,ic=0;
	while (1)
	{
		
		printf("Enter loan principal(-1 to end):\n");
		scanf_s("%f", &pr);
		if (pr == -1)
		{
			break;
		}
		printf("Enter interest rate:\n");
		scanf_s("%f", &rate);
		printf("Enter term of loan in days:\n");
		scanf_s("%f", &days);
		ic = pr * rate * days/365;
		printf("The interest charge is $%f\n\n", ic);

	}
	
	system("pause");
	return 0;
}