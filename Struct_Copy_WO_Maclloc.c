/*Program to check struct copying mechanism.*/
#include <stdio.h>
#include<string.h>

int main()
{
    /* A structure to store name and age*/
    struct a
    {
      char *n;
      int age;
    };
    
    /*creating structure elements*/
    struct a e1 = {"Pranjal",24};
    struct a e2 = e1;
    
    /*Changing name of struct e2.*/
    e2.n = "Rahul";
    
    /*Printing name and address of e1 and e2*/
    printf("%s %u\n",e1.n, &e1);
    printf("%s \t%u\n",e2.n, &e2);
    
    return 0;
}