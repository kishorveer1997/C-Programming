
/*
Accept number of rows and column from user and display below pattern.

Input : row :3		col:3
ouyput:  
		*	*	*
		*	*	*
		*	*	*
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0, j=0;
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	for(i = 1; i <=iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter Number of Rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns\n");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}