
#include<stdio.h>

int DiffFact(int iNo)
{
	int iEven = 1, iOdd = 1;
	int i=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(i = iNo; i > 1; i--)
	{
		if(i % 2 == 0)
		{
			iEven = iEven * i;
		}
		else 
		{
			iOdd = iOdd * i;
		}
	}
	
	return (iEven - iOdd);
	
}

int main()
{
	int iValue =0;
	int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = DiffFact(iValue);
	printf("Difference between Even and Odd Factrial is %d\n",iRet);
	
	return 0;
}