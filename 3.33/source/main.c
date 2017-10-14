#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	int length, width;
	printf("輸入矩形的長跟寬:");
	scanf("%d%d", &length, &width);
	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if ((i==1) || (i==length) || (j==1) || (j==width) )
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	system("pause");
	return 0;
}