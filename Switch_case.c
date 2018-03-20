/*Program for switch case example*/
#include<stdio.h>

int main(void)
{
	int x;
	for(x=0; x<4; x++)
	{
		switch(x)
		{
			case 2: printf("%d",x);
			case 0: printf("%d",x);
			default: break;
			case 3: printf("%d",x);
		}
	}
}