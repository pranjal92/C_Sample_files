#include<stdio.h>

int f1(int a, int b, int s,int z)
{
	int x,y;
	return (x=((((y=2)*z)+((a|b)*(2+s)))));
}
int f2(int a, int b, int s,int z)
{
	int x,y;
	return x=(y=2)*z+a|b*(2+s);
}
int f3(int a, int b, int s,int z)
{
	int x,y;
	return (x=((y=2)*z+(a|b)*(2+s)));
}
int f4(int a, int b, int s,int z)
{
	int x,y;
	return x=(y=2)*z+(a|b)*(2+s);
}
int f5(int a, int b, int s,int z)
{
	int x,y;
	return x=y=2*z+a|b*2+s;
}
int f6(int a, int b, int s,int z)
{
	int x,y;
	return (x=(y=2)*z+(a|b)*(2+s));
}
int main()
{
	printf("1.) %d\n",f1(1,2,3,4));
	printf("a.) %d\n",f2(1,2,3,4));
	printf("b.) %d\n",f3(1,2,3,4));
	printf("c.) %d\n",f4(1,2,3,4));
	printf("d.) %d\n",f5(1,2,3,4));
	printf("e.) %d\n",f6(1,2,3,4));
	return 0;
}