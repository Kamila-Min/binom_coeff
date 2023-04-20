#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>
#include <malloc.h>

double Factorial_1(double);

double Factorial_2(double);

double Factorial_3(double);

int main()
{
	int n = 0, k = 0;
	printf("Enter n, k\n");
	scanf("%d %d", &n, &k);
	
	double d = 0;
	d = Factorial_1(n) / (Factorial_2(k) * Factorial_3(n));

	printf("The amount of combinations n by k - %lg", d);

	return 0;
}

double Factorial_1(double n)
{
	int f = 1;
	for (int i = n; i > 0; i--)
	 f = f * i;
	
	return f;
}

double Factorial_2(double k)
{
	int f = 1;
	for (int i = k; i > 0; i--)
		f = f * i;

	return f;
}

double Factorial_3(double n)
{
	int f = 1;
	for (int i = n-1; i > 0; i--)
		f = f * i;

	return f;
}
