

/*
Problem statement : Accept N number from user and accept one number from user and 
				  return index of first occurence of that number

Input:	size  6
		No   25
Elements : 50	11	-11	25	66	25

Outpt:	4
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMMRY -1
#define ERRSIZE -2
#define ERRABS -3

int FirstOccurenceNo(int arr[], int iSize, int iNo)
{
	int i = 0;
	
	if(arr == NULL)
	{
		return ERRMMRY;
	}
	if(iSize <= 0)
	{
		return ERRSIZE;
	}
	
	for(i = 0; i < iSize ; i++)
	{
		if(arr[i] == iNo)
		{
			break;
		}
	}
	
	if(arr[i] == iNo)
	{
		return i;
	}
	else 
	{
		return ERRABS;
	}
	
}
int main()
{
	int iSize = 0, i = 0, j = 0;
	int *ptr = NULL;
	int iNo = 0, iRet = 0;
	
	printf("Enter array size input\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	printf("Enter number that you want check first occurence from array\n");
	scanf("%d", &iNo);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory allocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iSize; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Array is\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = FirstOccurenceNo(ptr,iSize,iNo);
	if(iRet == ERRMMRY)
	{
		printf("Error : Memory allocation fails\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\nError : Invalid array size input\n");
	}
	else if(iRet == ERRABS)
	{
		printf("\nArray not contains number %d in it\n",iNo);
	}
	else 
	{
		printf("\nFirst occurence of number %d is %d",iNo,iRet);
	}
	
	free(ptr);
	
	return 0;
}