/*Program to allocate using double pointer*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	unsigned int x = -1;
	int y = 10;
	
	if(y <=x)
		printf("A is true\n");
	if(y == ( x = -10))
		printf("B is true\n");
	if((int) x >= y)
		printf("C is true\n");
	return 0;
}