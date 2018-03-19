#include <stdio.h>

int main()
{
    union a
    {
      char ch[2];
      int i;
    };
    /*The value in the elements is some random garbage value.*/
    union a u;
    /*Required to make all bits to zero as some garbage value will be present when creating the variable.*/
    u.i=0;
    /*Prining the size of structure i.e. 4 bytes coz of int*/
    printf("%d\n",sizeof(u));
    /*Changing the first 2 bytes as size of char is 1 byte*/
    u.ch[0] = 3;
    u.ch[1] = 2;
    /*if initially i is not made 0 then the higer two bytes still have the same garbage data, as a result garbage value is seen*/
    printf("%d %d %d\n",u.i,u.ch[0],u.ch[1]);
    
    return 0;
}