#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  an = 0;
	float bb, tch, tcr, cl;
	while (an != -1)
	{
		printf("Enter account number(-1 to end)\n");
		scanf_s("%d", &an);
		printf("Enter beginning balance\n");
		scanf_s("%f", &bb);
		printf("Enter total charge\n");
		scanf_s("%f", &tch);
		printf("Enter total credit\n");
		scanf_s("%f", &tcr);
		printf("Enter credit limit\n");
		scanf_s("%f", &cl);
		if ((bb + tch - tcr) > cl)
		{
			printf("accont:%d\ncredit limit:%f\nbalance:%f\ncredit limit exceeded.\n\n", an, cl, (bb + tch - tcr));
		}
	}
	system("pause");
	return 0;
}