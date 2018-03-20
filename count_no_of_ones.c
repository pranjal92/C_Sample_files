/*Count the number of ones*/
#include<stdio.h>
int main()
{
	unsigned int n;
	int count =0;
	n = 7;
	while(n != 0)
	{
		if((n & 1) == 1)
			count++;
		n = n >> 1;
	}
	printf("%d\n",count);
}