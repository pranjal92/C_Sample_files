/*Proram to print the sum of digit using rcursion*/
#include<stdio.h>
int sumofdigit(int n)
{
	int s,d;
	if(n != 0)
	{
		d = n % 10;
		n = n / 10;
		s = d + sumofdigit(n);
	}
	else
	{
		return 0;
	}
	return s;
}

int main(void)
{
	int a;
	a = sumofdigit(147);
	printf("Sum = %d\n",a);
	return 0;
}