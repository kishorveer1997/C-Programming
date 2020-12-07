
#include<stdio.h>

void DisplayRange(int iNo1, int iNo2)
{
	if(iNo1 > iNo2)
	{
		printf("Error : Invalid input\n");
		return;
	}
	
	for(int i=iNo1; i <= iNo2; i++)
	{
		printf("%d\t",i);
	}
}

int main()
{
	int iNo1 = 0, iNo2 = 0;
	
	printf("Enter Lower Number from range\n");
	scanf("%d",&iNo1);
	
	printf("Enter Higher Number from range\n");
	scanf("%d",&iNo2);
	
	if(iNo1 > iNo2)
	{
		printf("Error : Invalid input\n");
		return -1;
	}
	
	DisplayRange(iNo1,iNo2);
	
	return 0;
}