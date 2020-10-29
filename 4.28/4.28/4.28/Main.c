#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,hr,num;
	float s1 = 0, s2 = 0, s3 = 0, s4 = 0, ts2 = 0, ts3 = 0, ts4 = 0;
	while (1)
	{
		printf("Please enter salary code(-1 to end)\n");
		scanf_s("%d", &i);
		if (i == -1)
		{
			break;
		}
		switch (i)
		{
		case 1:
			printf("Please enter weekly salary \n");
			scanf_s("%f", &s1);
			printf("The managers weekly salary is %f \n", s1);
			break;
		case 2:
			printf("Please enter hourly rate \n");
			scanf_s("%f", &s2);
			printf("Please enter working hours \n");
			scanf_s("%d", &hr);
			if (hr > 40)
			{
				ts2 = 1.5*(s2*(hr - 40)) + s2 * 40;
				printf("The part-time workers weekly salary is %f \n", ts2);
			}
			else
			{
				ts2 = s2 * hr;
				printf("The part-time workers weekly salary is %f \n", ts2);
			}
			break;
		case 3:
			printf("Please enter the sales of this week \n");
			scanf_s("%f", &s4);
			ts4 = 250 + s4 * 0.057;
			printf("The commissioner weekly salary is %f \n", ts4);

		case 4:
			printf("Please enter the number of each produced product \n");
			scanf_s("%d", &num);
			printf("Please enter the commission of each produced product \n");
			scanf_s("%f", &s3);
			ts3 = num * s3;
			printf("¹s¤u¥Jªºweekly salary is %f \n", ts3);
		}
	}
	system("pause");
	return 0;
}