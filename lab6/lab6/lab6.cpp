#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
double calc(double x);
double calc(double x)
{
	double y;
	if (x < 0.000001 || x>1000)
	{
		y = 0;
		return y;
	}
	else
	{
		y = calc(x + 1) + 1 / x;
		return y;
	}
}

int main()
{
	double x;
	printf("x=");
	scanf_s("%lf", &x);
	printf("y=%lf", calc(x));
	_getch();
	return 0;
}

