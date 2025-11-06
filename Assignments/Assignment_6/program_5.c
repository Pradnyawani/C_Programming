#include<stdio.h>
 

 float Percantage(int iTotal,int iObtained)
 {
    if(iTotal==0)
    {
        return 0.0;
    } 
    return (iObtained*100.0)/iTotal;
 }

 int main()
 {
    int iValue1=0,iValue2=0;

    float fRet=0.0;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

     printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet=Percantage(iValue1,iValue2);
    printf("Enter Percentage: %.2f%%\n",fRet);

    return 0;

    
 }
