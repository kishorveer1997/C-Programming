
#include<stdio.h>

void DisplayPattern(int iValue)
{
	int i=0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(i = 1; i <= iValue*2; i++)
	{
		if(i <= iValue)
		{
			printf("*\t");
		}
		else 
		{
			printf("#\t");
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	
	return 0;
}