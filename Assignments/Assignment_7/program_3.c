#include<stdio.h>

void Display(int No)
{
    int iCnt=0;
    for(iCnt=-No;iCnt<=No;iCnt++)
    {
        printf("%d",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}