#include<stdio.h>
 int main()
 {
    int ivalue=11;
    char cvalue='m';


    int *iptr=&ivalue;
    char *cptr=&cvalue;

    printf("sizeof iptr : %lu\n",sizeof(iptr));
    printf("sizeof cptr : %lu\n",sizeof(cptr));
    return 0;
 }