/*Program to allocate using double pointer*/
#include<stdio.h>
#include<stdlib.h>

void allocate(int **p)
{
	*p = (int*)malloc(sizeof(int));
}

int main(void)
{
	int *p = NULL;
	allocate(&p);
	*p = 42;
	printf("*p = %d\n",*p);
	free(p);
	return 0;
}