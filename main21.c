
/*
Problem statement : Accept number of rows and columns from user dsplay below pattern.

Input : row :4     col:4
output:
		4	4	4	4
		3	3	3	3
		2	2	2	2
		1	1	1	1
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0, j = 0;
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	
	
	for(i = iRow; i >=1; i--)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("%d\t",i);
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