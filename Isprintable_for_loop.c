/*Proram to use malloc and detect printable data and non-printable data*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int strvisx(char *dst,const char *src, int len)
{
	printf("In fun\t%s\t%s\n",src,dst);
	int write = 0;
	for(;len>0;src++,len--)
	{
		printf("In for\t%d.) %c\t%c\n",len,*src,*dst);
		if(isprint(*src))
			*dst++ = *src, write++;
		else
		{
			sprintf(dst,"\\%03o",*src);
			dst += 4, write +=4;
		}
	}
	*dst = '\0';
	return write;
}

int main () 
{
	char *Src = (char *) malloc(20*sizeof(char));
	char *Dest = (char *) malloc(80*sizeof(char));
	Src = "\t\t\td";
	// Dest = "\0";
	printf("%d\n",strvisx(Dest,Src,3));
	printf("%d\t%s\t%s\n",strlen(Dest),Src,Dest);
	return(0);
} 