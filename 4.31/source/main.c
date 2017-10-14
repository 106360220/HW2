#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j>i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k<i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 4; i > 0; i--)
	{
		for (int j = 5; j > i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k < i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
		return 0;

}