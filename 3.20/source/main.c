#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hours;
	float rate, salary;
	int i;
	i = 1;
	while (i>0)
	{ 
	printf("Enter # of hours worked (-1 to end) : ");
	scanf("%d",&hours);
	if (hours == -1)
		break;
	printf("Enter hourly rate of the worker ($00.00) : ");
	scanf("%f",&rate);
	if (hours <= 40)
		salary = hours*rate;
	else
		salary = 40 * rate + (hours - 40)*rate*1.5;
		printf("Salary is $%.2f\n",salary);
	}
		system("pause");
		return 0;

}