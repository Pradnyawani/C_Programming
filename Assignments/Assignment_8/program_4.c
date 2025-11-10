
#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : Accept number from user and display its table.
// Input         : Integer
// Output        : Displays table
// Author        : Wani Pradnya
// Date          : 9/11/2025
//
///////////////////////////////////////////////////////////////
int Table(int iNo)
{
    int iCnt = 0;

    
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
    
}
    


int main()
{
    int iValue = 0;
  
    printf("Enter Number :");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;

}
//Time Complexity: O(n)