
/*
Problem statement : Accept N number from user and accept one number from user and 
				   check weather that array contains or not

Input:	size  6
		No   25
Elements : 50	11	-11	25	66	11

Outpt:	true
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
#define ERRMEMMRY -1
#define ERRSIZE -2

BOOL ChkNumber(int arr[], int iSize, int iNo)
{
	int i = 0;
	BOOL Ret = FALSE;
	
	if(arr == NULL)
	{
		return ERRMEMMRY;
	}
	if(iSize <= 0)
	{
		return ERRSIZE;
	}
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] == iNo)
		{
			break;
		}
	}
	
	if(arr[i] == iNo)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}

int main()
{
	int iSize = 0;
	int iNo = 0;
	int *ptr = NULL;
	int i = 0, j = 0;
	BOOL bRet = FALSE;
	
	printf("Enter size of array\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	printf("Enter number that you want to check\n");
	scanf("%d", &iNo);
	
	ptr = (int*)malloc(iSize * sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memmory allocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iSize; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Array elementsare\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t", ptr[j]);
	}
	
	bRet = ChkNumber(ptr,iSize,iNo);
	if(bRet == ERRMEMMRY)
	{
		printf("\nError : Memory alocation fails\n");
	}
	else if(bRet == ERRSIZE)
	{
		printf("\nError : Invalid input array size\n");
	}
	else if(bRet == TRUE)
	{
		printf("\nNumber %d is present in array\n",iNo);
	}
	else 
	{
		printf("\nNumber %d is Not present in array\n",iNo);
	}
	
	free(ptr);
	
	return 0;
}