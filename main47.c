
/*
Problem statement : Accept N number from user and return difference between frequency of even and odd numbers

Input:	N  6
Elements : 50	32	-11	25	66	2

Outpt:	2 (4-2)
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMMRY -1
#define ERRSIZE -2

int CountDiff(int arr[], int iSize)
{
	int i = 0;
	int iEven = 0, iOdd = 0;
	
	if(arr == NULL)
	{
		return ERRMMRY;
	}
	if(iSize <= 0)
	{
		return ERRSIZE;
	}
	
	for(i = 0; i < iSize; i++)
	{
		if((arr[i] % 2 == 0) && (arr[i] != 0))
		{
			iEven++;
		}
		else if(arr[i] != 0)
		{
			iOdd++;
		}
	}
	
	return (iEven - iOdd);
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i=0, j = 0, iRet = 0;
	
	printf("Enter size of array\n");
	scanf("%d",&iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	ptr = (int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("array elements are\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = CountDiff(ptr,iSize);
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
		printf("\nDifference between even and odd number is %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}