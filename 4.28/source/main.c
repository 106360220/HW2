#include<stdio.h>
#include<stdlib.h>

int main()
{
	int code, hours, sales,rate;
	double salary;
	printf("Enter your pay code : ");
	scanf("%d", &code);
	
	
	switch (code)
	{
	case 1:
		printf("You are managers,your salary is a fixed weekly salary.\n");
		break;
	case 2:
		printf("Enter of hours worked : ");
		scanf("%d", &hours);
		printf("Enter hourly rate of the worker : ");
		scanf("%d", &rate);
		if (hours > 40)
		{
			salary = 40 * rate + (hours - 40)*1.5*rate;
			printf("Your salary is %.2f\n", salary);
		}
		else
		{
			salary = hours*rate;
			printf("Your salary is %.2f\n", salary);
		}
		break;
	case 3:
		printf("Enter your weekly sales : ");
		scanf("%d",&sales);
		salary = 250 + sales*0.057;
		printf("Your salary is %.2f\n",salary);
		break;
	case 4:
		printf("Your salary is a fixed amount of money for each of the items they produce.\n");
		break;
	}
	system("pause");
	return 0;



}