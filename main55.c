/*
Problem statement : Accept N number from user and return smmalest element from array
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	3
*/

#include<stdio.h>
#include<stdlib.h>

int MinNumber(int arr[], int iSize)
{
	int i = 0;
	int iMin = arr[i];
	
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] < iMin)
		{
			iMin = arr[i];
		}
	}
	
	return iMin;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i=0, j = 0, iRet = 0;
	
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
	for(i =0; i < iSize; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Array is\n");
	for( j = 0; j < iSize; j++)
	{
		printf("%d\t", ptr[j]);
	}
	
	iRet = MinNumber(ptr,iSize);
	printf("\nMinimum number from array is %d\n", iRet);
	
	free(ptr);
	
	return 0;
}