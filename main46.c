
/*
Problem statement : Accept N number from user and return frequency of even numbers

Input:	N  6
Elements : 50	33	-11	25	66	2

Outpt:	3
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMMRY -1
#define ERRSIZE -2

int CountEvenNo(int arr[], int iSize)
{
	int i = 0, iCnt = 0;
	
	if(arr == NULL)		//Filter
	{
		return ERRMMRY;
	}
	
	if(iSize <= 0)		//filter
	{
		return ERRSIZE;
	}
	
	for(i = 0; i < iSize; i++)
	{
		if((arr[i] %2 == 0) && (arr[i] != 0))
		{
			iCnt++;
		}
	}
	
	return iCnt;
}

int main()
{
	int iValue = 0;
	int *ptr = NULL;
	int i=0, j = 0, iRet = 0;
	
	printf("Enter array size\n");
	scanf("%d",&iValue);
	if(iValue <= 0)		//filter
	{
		printf("Error : Invalid input of array size\n");
		return -1;
	}
	
	ptr = (int*)malloc(iValue*sizeof(int));
	if(ptr == NULL)			//filter
	{
		printf("Memmory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iValue;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("array elements are\n");
	for(j =0; j < iValue; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = CountEvenNo(ptr,iValue);
	if(iRet == ERRMMRY)
	{
		printf("\nError : Memory alocation fails\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\nError : Invalid array size input\n");
	}
	else 
	{
		printf("\nFrequmcy of even numbers are %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}