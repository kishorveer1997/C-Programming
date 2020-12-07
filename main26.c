
/*
problem statement : Accept number of rows and coumn from user and display below pattern

Input : row 4   col 4
output:
		1	2	3	4	
		2	3	4	5
		3	4	5	6
		4	5	6	7
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0, j=0, iCnt = 0;
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	for(i =1; i<= iRow;i++)
	{
		iCnt = i;
		
		for(j = 1; j <= iCol; j++)
		{
			printf("%d\t",iCnt++);
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
	scanf("%d", &iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}