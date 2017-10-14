#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double amount;
	double principal = 5000.0;
	double rate;
	unsigned int year;
	printf("Year \t\t Amount on deposit\n");

	for (rate = 0.1; rate <= 0.125; rate += 0.005)
	{
	
		for (year = 1; year <= 15; ++year)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);

		}
		printf("----------------------------------------\n");
	}
	system("pause");
	return 0;
}