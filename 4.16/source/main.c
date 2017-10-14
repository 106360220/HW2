#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s","*");
		}
			
			printf("\n");
	}
	//=====================================================
	printf("(B)\n");
	for (i = 10; i >=1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}

		printf("\n");
	}
	//===================================================

	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j >= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
	//======================================
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= (10 - i))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}

		printf("\n");
	}
	
	system("pause");
	return 0;
   }