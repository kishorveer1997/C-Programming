
/*
Problem statement : Accept number of rows and columns from user dsplay below pattern.

Input : row :4     col:4
output:
		A	A	A	A
		A	A	A	A
		A	A	A	A
		A	A	A	A
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
	
	if(iRow > 26)
	{
		printf("Error : Invalid input\n");
		return;
	}
	
	char ch = 'A';
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("%c\t",ch);
		}
		ch++;
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