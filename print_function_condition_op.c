/*Program to allocate using double pointer*/
#include<stdio.h>
#include<string.h>

void f(int x)
{
	char b[] = "1234567";
	strncpy(b,"abc",x);
	{
		int i=0;
		for(;i<sizeof(b);i++)
		{
			printf("%c",b[i] ? b[i] :'*');
		}
	}
}

int main(void)
{
	f(2);
	f(6);
	return 0;
}