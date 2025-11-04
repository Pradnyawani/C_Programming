#include<stdio.h>
#include<stdbool.h>


bool ChkEvne(int iNo)
{
    if(iNo%2==0)
    {
        return true;

    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("enter number:");
    scanf("%d",&iValue);
    
    bRet=ChkEvne(iValue);

    if(bRet==true)
    {
        printf("Number is Even\n");

    }
    else{
        printf("Number is odd\n");

    }
}
