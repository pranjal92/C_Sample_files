/*Program to use enums */
#include<stdio.h>

int main()
{
	enum days {MON = -1,TUE,WED = 6,THU,FRI,SAT};
	//printf("%d %d %d %d %d %d\n",++MON,TUE,WED,THU,FRI,SAT); //Compile time error, lvalue required
	printf("%d %d %d %d %d %d\n",MON,TUE,WED,THU,FRI,SAT);	//Working fine
	return 0;
}