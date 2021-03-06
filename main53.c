
/*
Problem statement : Accept N number from user and return product of all odd elements
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	45
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMMRY -1
#define ERRSIZE -2

int MultOfOdd(int arr[], int iSize)
{
	int i =0, iMult = 1;
	
	if(arr == NULL)
	{
		return ERRMMRY;
	}
	if(iSize <= 0)
	{
		return ERRSIZE;
	}
	
	for(i =0; i < iSize; i++)
	{
		if(arr[i] % 2 != 0)
		{
			iMult = iMult * arr[i];
		}
	}
	
	return iMult;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i = 0, j = 0, iRet = 0;
	
	printf("Enter size of array\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	ptr = (int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory allocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iSize;i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Array is\n");
	for(int j=0; j < iSize; j++)
	{
		printf("%d\t", ptr[j]);
	}
	
	iRet = MultOfOdd(ptr,iSize);
	if(iRet == ERRMMRY)
	{
		printf("\nError : Memory allocation fails\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\nError : Invalid array size input\n");
	}
	else 
	{
		printf("\nMultiplication of odd elements from array is %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}