#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	int length, width;
	printf("��J�x�Ϊ�����e:");
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