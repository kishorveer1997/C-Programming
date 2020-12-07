
#include<stdio.h>

void DisplayRevNum(int iValue1, int iValue2)
{
	int i = 0;
	
	if(iValue1 > iValue2)
	{
		printf("Error : Invalid input\n");
	}
	
	for( i = iValue2; i >= iValue1; i--)
	{
		printf("%d\t",i);
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter lower number from range\n");
	scanf("%d",&iValue1);
	
	printf("Enter higher number from range\n");
	scanf("%d",&iValue2);
	
	if(iValue1 > iValue2)
	{
		printf("Error : Invalid input\n");
		return -1;
	}
	
	DisplayRevNum(iValue1,iValue2);
	
	return 0;
}