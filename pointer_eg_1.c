/*Program related to pointers, Find the output*/
#include<stdio.h>

int *fun()
{
	static int i = 0;
	i++; 
	return &i;
}
int main()
{
/*	int size?array_t;
	int my.var;
	int a_var;
	int go@at;
	int a-var;
*/	
	int *y = fun();
	printf("%d\n",(*y)++);
	fun();
	printf("%d\n",*y);
	return 0;
}