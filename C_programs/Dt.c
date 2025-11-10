#include<stdio.h>

int main()
{
    char cvalue='s';
    int ivalue=11;
    float fvalue=90.34f;
    double dvalue=78.4536;

  printf("Size of character is: %lu\n",sizeof(cvalue)); 
  printf("Size of integer is: %lu\n",sizeof(ivalue)); 
  printf("Size of float is: %lu\n",sizeof(fvalue)); 
  printf("Size of double is: %lu\n",sizeof(dvalue)); 

    return 0;
}