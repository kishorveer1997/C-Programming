
#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1; i <= iNo; i++)
	{
		printf("#\t%d\t*\t",i);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d", &iValue);
	
	DisplayPattern(iValue);
	
	return 0;
}