/*
problem statement : Accept number of rows and columns from user display below pattern

Input : Row 5     col 5
Output:
		1	2	3	4	5
		1	2			5
		1		3		5
		1			4	5
		1	2	3	4	5
*/


#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0, j=0;
	
	if((iRow < 0) || (iCol < 0) || (iRow != iCol))
	{
		printf("Error : Invalid input\n");
		return;
	}
	
	for(i =1; i <= iCol; i++)
	{
		int iCnt = 1;
		
		for(j=1; j <= iCol; j++)
		{
			if((i == 1) || (i == iRow) || (j == 1) || ( j == iCol) || (i == j))
			{
				printf("%d\t",iCnt);
			}
			else 
			{
				printf(" \t");
			}
			iCnt++;
		}
		printf("\n\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of column\n");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}