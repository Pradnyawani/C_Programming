

#include<stdio.h>
void RangeDisplayRev(int iStart,int iEnd)
 {
    int iCnt=0,iSum=0;
   
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       
      printf("%d",iCnt);  
    }
  

     
 }
 int main()
 {
    int iValue1=0,iValue2=0;


    printf("Ener Starting point");
    scanf("%d",&iValue1);

    printf("Ener Ending point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;



 }