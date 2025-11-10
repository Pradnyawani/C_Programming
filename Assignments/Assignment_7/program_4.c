#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Accept number from user and print all odd 
//                 numbers up to that number.
// Input         : Integer
// Output        : Displays odd numbers
// Author        : Wani Pradnya 
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
     int iCnt=0;
   
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            printf("%d",iCnt);
           
        }
        
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
    



