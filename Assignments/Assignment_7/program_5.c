#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : Accept number from user and print first 
//                 5 multiples of that number.
// Input         : Integer
// Output        : Displays multiples
// Author        : Pradnya Wani
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

void MultiDisplay(int iNo)
{
     int iCnt=0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
      printf("%d",iNo * iCnt);
    }
   
    
    
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultiDisplay(iValue);

    return 0;
}
//Time Complexity: O(1)
    



