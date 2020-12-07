
/*
problem statement : Accept number of rows and coumn from user and display below pattern

Input : row 5    col 5
output:
		1	2	3	4	5
	   -1  -2  -3  -4  -5
		1	2	3	4	5
	   -1  -2  -3  -4  -5
		1	2	3	4	5
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
	
	int i=0, j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if(i % 2 != 0)
			{
				printf(" %d\t",j);
			}
			else 
			{
				printf("%d\t",-j);
			}
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter value of rows\n");
	scanf("%d", &iValue1);
	
	printf("Enter value of column\n");
	scanf("%d", &iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}














