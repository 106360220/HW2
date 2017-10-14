#include<stdio.h>
#include<stdlib.h>

int main()
{
	float sales;
	float money;
	int i;
	i = 1;
		while (i > 0)
		{
			printf("Enter sales in dollars (-1 to end): ");
			scanf("%f",&sales);
			if (sales == -1)
				break;
			money = (sales*0.09) + 200;
			printf("Salary is:%.2f\n",money);	
		}		
	system("pause");
	return 0;
}
