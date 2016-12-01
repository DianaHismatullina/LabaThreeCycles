// Laba3_cycles.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "stdafx.h"
#include <iostream>

int factorial(int x)
{
	int c = 1;
	if (x<0) c = 0;
	else if (x == 0) c = 1;
	else while (x>0)
	{
		c = c*x;
		x = x - 1;
	}
	return c;
}

void main()
{
	double tch = 1e-6;
	int k = 0, t = 1, zn = 1;
	const double pi = 3.1415926;
	double S0 = 0., S = 0., i = 1., mn=1., cos15;

	do
	{
		t = 2 * k;
		while (t)
		{
			mn = mn*(pi / 12.);
			t--;
		}
		S0= mn / factorial(2 * k);
		S = S + S0*zn;
		zn = zn*(-1);
		k++;
		i++;
		mn = 1.;
	} while (S0 >= tch); 

	cos15 = cos(pi/12.);

	printf_s("\nsumma = %f\n", S);
	printf_s("\ncos(15) = %f\n", cos15);

	system("pause");
}
