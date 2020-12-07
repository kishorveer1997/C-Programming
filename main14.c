

/*
Problem statement : Accept number from user and display below pattern.

input :  8
output : 2	4	6	8	10	12	14	16
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(i =1; i <= iNo; i++)
	{
		printf("%d\t",2*i);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	
	return 0;
}