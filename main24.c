
/*
Problem statement : Accept number of rows and column from user and display below pattern.

Input : rows : 4   col : 4

Output:
	a	b	c	d
	1	2	3	4
	a	b	c	d
	1	2	3	4
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	int iCnt = 0;
	char ch = '\0';
	
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
		ch = 'a';
		iCnt = 1;
		
		for(j = 1; j <= iCol; j++)
		{
			if(i % 2 != 0)
			{
				printf("%c\t",ch++);
			}
			else 
			{
				printf("%d\t",iCnt++);
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