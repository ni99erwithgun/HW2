#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,t1=4,t2=0,t3=0,t4=1,t5=6,t6=6;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			
			if (j == t1)
			{
				if (i < 5)
				{
					for (t2; t2 > 0; t2--)
					{
						printf("*");
					}
					printf("*");
					t1--;
					t3 += 2;
					t2 = t3;
				}
				if (i >= 5)
				{
					
					switch (t1)
					{
						case 1:
							printf("*******\n");
							t1++;
							break;
						case 2:
							printf("  *****\n");
							t1++;
							break;
						case 3:
							printf("   ***\n");
							t1++;
							break;
						case 4:
							printf("    *\n");
							t1++;
							break;
					}
					
					
				}
			}
		
			else
			{
				printf(" ");
			}
			
		}
		if (i == 4)
		{
			t1 = 1;
		}
		
		
			printf("\n");
		
		
		
		
	}
	system("pause");
	return 0;
}