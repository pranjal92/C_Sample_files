#include <stdio.h>

#define CLEAR(X,POS) (X & (~(1<<POS)))

int main()
{
    char ch = 7;
    printf("before: %b\n",ch);
    ch = CLEAR(ch, 1);
    printf("after: %b\n",ch);

    return 0;
}