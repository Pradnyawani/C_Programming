

#include<stdio.h>
 int RangeSum(int iStart,int iEnd)
 {
    int iCnt=0,iSum=0;
   
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        iSum=iSum+iCnt;
      
    }
    return iSum;

     
 }
 int main()
 {
    int iValue1=0,iValue2=0,iRet=0;


    printf("Ener Starting point");
    scanf("%d",&iValue1);

    printf("Ener Ending point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

     printf("Addition is %d",iRet);

    return 0;



 }