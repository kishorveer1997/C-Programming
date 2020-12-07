
/*
Problem statement : Accept number of rows and column from user and display below pattern.

Input : rows : 4   col : 4

Output:
		2	4	6	8
		1	3	5	7
		2	4	6	8
		1	3	5	7
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0, j =0;
	int iCnt1 = 0, iCnt2 = 0;
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	for(i = 1; i <= iRow; i++)
	{
		iCnt1 = 1;
		iCnt2 = 2;
		
		for(j = 1; j <= iCol; j++)
		{
			if(i % 2 == 0)
			{
				printf("%d\t",iCnt1);
				iCnt1 = iCnt1 + 2;
			}
			else 
			{
				printf("%d\t",iCnt2);
				iCnt2 = iCnt2 + 2;
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	
	printf("Enter number of columns\n");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}