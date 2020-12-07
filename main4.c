
#include<stdio.h>

void DisplayEvenNo(int iNo1, int iNo2)
{
	if(iNo1 > iNo2)
	{
		printf("Error : Invalid input\n");
		return;
	}
	
	int i = 0;
	for(i = iNo1; i <= iNo2; i++)
	{
		if(i %2 == 0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter lower Number from range\n");
	scanf("%d",&iValue1);
	
	printf("Enter higher Number from range\n");
	scanf("%d",&iValue2);
	
	if(iValue1 > iValue2)
	{
		printf("Error : Invalid Input\n");
		return -1;
	}
	
	DisplayEvenNo(iValue1,iValue2);
	
	return 0;
}