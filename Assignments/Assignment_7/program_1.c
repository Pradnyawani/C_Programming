#include<stdio.h>
void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf(" $  * ");
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number ");
    scanf("%d",&ivalue);

    Pattern(ivalue);
    return 0;
}