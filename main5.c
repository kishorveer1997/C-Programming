
#include<stdio.h>

int AdditionNum(int iNo1,int iNo2)
{
	int iAdd = 0;
	int i = 0;
	
	for(i = iNo1; i <= iNo2; i++)
	{
		iAdd = iAdd + i;
	}
	
	return iAdd;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	int iRet = 0;
	
	printf("Enter lower number from range\n");
	scanf("%d",&iValue1);
	
	printf("Enter higher number from range\n");
	scanf("%d",&iValue2);
	
	if(iValue1 > iValue2)
	{
		printf("Error : Invalid input\n");
		return -1;
	}
	
	iRet = AdditionNum(iValue1,iValue2);
	printf("Additon is %d\n",iRet);
	
	return 0;
}