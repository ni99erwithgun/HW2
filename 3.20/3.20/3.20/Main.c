#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	float sal = 0, hr = 0;
	while (1)
	{
		
		printf("Enter # of hour worhed(-1 to end):\n");
		scanf_s("%f", &hr);
		if (hr == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker:\n");
		scanf_s("%f", &sal);
		printf("Salary is %f\n\n", hr*sal);
	}
	system("pause");
	return 0;
}