#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c, interest;
	int i;
	i = 1;
	while (i > 0)
	{
		printf("Enter loan principal (-1 to end) : ");
		scanf("%f", &a);
		if (a == -1)
			break;
		printf("Enter interest rate : ");
		scanf("%f", &b);
		printf("Enter term of the loan in days : ");
		scanf("%f", &c);
		interest = a*b*c / 365;
		printf("The interest charge is $%.2f\n", interest);
	}
	system("pause");
	return 0;
}