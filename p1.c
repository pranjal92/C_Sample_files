/*This program is to SET, CLEAR, TOGGLE a particular bit*/
#include <stdio.h>

#define SET(X,POS) 		(X & (~(1<<POS)))
#define CLEAR(X,POS)	(X | (1<<POS))
#define CLEAR(X,POS) 	(X ^ (1<<POS))

int main(void)
{
    char ch = 7;		//0111
    printf("Orignal: %b\n",ch);	
    
	/*Clear a particular bit*/
	ch = CLEAR(ch, 1);	//0110
    printf("Clear bit 1: %b\n",ch);
	
	/*Set a particular bit*/
	ch = SET(ch, 4);	//1110
	printf("Clear bit 4: %b\n",ch);
	
	/*Toggle a particular bit*/
	ch = TOGGLE(ch, 3);	//1010
	printf("Toggle bit 2: %b\n",ch);
    
	return 0;
}