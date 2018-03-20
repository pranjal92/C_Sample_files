/*Program to print values using while loop and increment and decrement operator.*/
#include<stdio.h>

int main(void )
{
	int i=5;
	while(i>0)
	{
		printf("%d ",--i);
	}
	while(i<=5)
	{
		printf("%d ",i++);
	}
	printf("\n");
	return 0;
}