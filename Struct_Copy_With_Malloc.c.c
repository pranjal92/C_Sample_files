/*Program_2 to check struct copying mechanism.*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    /* A structure to store name and age*/
    struct a
    {
      char *n;
    };

    /*creating structure elements*/
    struct a e1 ,e2;
    e1.n = (char *) malloc(20*sizeof(char));
  strcpy(e1.n,"Pranjal");

    e2=e1;
    e1.n[0] = 'R';
    /*Changing name of struct e2.*/
    //e1.n = "PRANJAL";

    /*Printing name and address of e1 and e2*/
    printf("%s %u\n",e1.n, &e1);
    printf("%s %u\n",e2.n, &e2);

    return 0;
}