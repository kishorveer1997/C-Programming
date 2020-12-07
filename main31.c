
/*
problem statement : Accept number of rows and columns from user display below pattern

Input : Row 4     col 4
Output:
		1	2	3	4
		1	*	*	4
		1	*	*	4
		1	2	3	4
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	for(int i=1; i <= iRow; i++)
	{
		for(int j=1; j <= iCol; j++)
		{
			if((i == 1) || (i == iRow) || (j == iCol) || (j == 1))
			{
				printf("%d\t",j);
			}
			else 
			{
				printf("*\t");
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
	
	printf("Enter number of clomns\n");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}