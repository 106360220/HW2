#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,d,e,i;
	int  blance;
	i = 1;
	while (i > 0)
	{
		printf("Enter account number (-1 to end):");
		scanf("%d", &a);
		printf("Enter beginning blance:");
		scanf("%d", &b);
		printf("Enter total charges:");
		scanf("%d", &c);
		printf("Enter total credits:");
		scanf("%d", &d);
		printf("Enter credit limit:");
		scanf("%d", &e);
		blance = b - d + c;
	
		if (blance > e)
		{
			printf("Account:%d\n", a);
			printf("Credit limit:%d\n", e);
			printf("blance:%d\n", blance);
			printf("Credit limit Exceed.\n");
		}
	
		printf("\n");
	}

	

	system("pause");
	return 0;
}