

/*
Accept number of rows and column from user and display below pattern.

Input : row :4		col:3
ouyput:  
		3	2	1
		3	2	1
		3	2	1
		3	2	1
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0, j =0;
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	for(i = 1; i <= iRow;i++)
	{
		for(j = iCol; j >=1; j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of coluns\n");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
}