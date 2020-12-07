
#include<stdio.h>

int EvenFactorial(int iValue)
{
	int i=0, iFact = 1;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(i = iValue ; i > 1; i--)
	{
		if(i % 2 == 0)
		{
			iFact = iFact * i;
		}
	}
	
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = EvenFactorial(iValue);
	printf("Factorial is %d\n",iRet);
	return 0;
}