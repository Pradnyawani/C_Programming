
#include<stdio.h>
#include<stdlib.h>

int main()
{
 
      int length=0;
      int *p=NULL;

        printf("enter the number of elements\n");
        scanf("%d",&length);
//step 1:allocate the memory
        p=(int*)malloc(length*sizeof(int));
        if(p=NULL)
        {
            printf("unable to allocate memory\n");
        }
        else
        {
            printf("memory gets successful allocated\n");
        }
//step 2:use the memory

//step 3:free the memory
free(p);
    return 0;
}