/*
problem statement : Accept number of rows and columns from user display below pattern

Input : Row 4     col 4
Output:
		1	2	3	4
			2	3	4
				3	4
					4	
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i =0, j=0, iCnt =0;
	
	if((iRow < 0) || (iCol < 0) || (iRow != iCol))
	{
		printf("Error : Invalid input\n");
		return;
	}
	
	for(i =1; i <= iRow; i++)
	{
		iCnt = i;
		
		for(j=1; j<= iCol; j++)
		{
			if(i <= j)
			{
				printf("%d\t",iCnt++);
			}
			else 
			{
				printf(" \t");
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
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}