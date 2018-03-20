/*Program for usae of malloc and chr pointer*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x = 1;
	int *ptr = malloc(sizeof(int));
	char *ch = "ABCD\0""abcd";
	
	ptr = &x;
	x=2;
	*ptr = 3;
	
	printf("%d\n",x);
	printf("%s\n",ch);
	
	return 0;
}