#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sales = 0,salary=0,i=0;
	while (i != -1)
	{
		printf("enter sales in dollars(-1 to end):\n");
		scanf_s("%f", &sales);
		i = sales;
		if (i == -1)
		{
			break;
		}
		salary = sales * 0.09 + 200;
		printf("Salary is %f\n\n", salary);

	}
	system("pause");
		return 0;
}