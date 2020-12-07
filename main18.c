/*
Accept number of rows and column from user and display below pattern.

Input : row :3		col:4
ouyput:  
		*	#	*	#
		*	#	*	#
		*	#	*	#
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	for(i=1; i <= iRow; i++)
	{
		for(j=1; j<=iCol; j++)
		{
			if(j % 2 == 0)
			{
				printf("#\t");
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
	int iRow = 0, iCol = 0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iRow);
	
	printf("Enter number of column\n");
	scanf("%d",&iCol);
	
	DisplayPattern(iRow,iCol);
	
	return 0;
}