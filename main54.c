
/*
Problem statement : Accept N number from user and return largest element from array
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	70
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMMRY -1
#define ERRSIZE -2

int MaxNumber(int arr[], int iSize)
{
	int i=0;
	int iMax = 0;
	
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
		if(arr[i] > iMax)
		{
			iMax = arr[i];
		}
	}
	return iMax;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i = 0, j = 0, iRet = 0;
	
	printf("Enter array size\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	ptr =(int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory allocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i=0; i < iSize; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Array is\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t", ptr[j]);
	}
	
	iRet = MaxNumber(ptr,iSize);
	if(iRet == ERRMMRY)
	{
		printf("\nError : Memory allocation fails\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\nError : Invalid Array size input\n");
	}
	else 
	{
		printf("\nmaximum number is %d\n", iRet);
	}
	
	free(ptr);
	
	return 0;
}