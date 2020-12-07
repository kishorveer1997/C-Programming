
#include<stdio.h>

void DisplayPattern(int iValue)
{
	int i=0;
	char a = 'A';
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	if(iValue > 26)
	{
		printf("Error : Invalid input\n");
		return;
	}
	
	for(i =1; i <= iValue;i++)
	{
		printf("%c\t",a);
		a++;
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