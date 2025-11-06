#include<stdio.h>

int multiply(int No1,int No2,int No3)
{
    if(No1==0||No2==0||No3==0)
    {
        return 0;
    }
    return No1*No2*No3;
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;
    printf("printf enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
     iRet=multiply(iValue1,iValue2,iValue3);
     printf("Multiplication is: %d",iRet);
     return 0;
}