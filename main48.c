
/*
Problem statement : Accept N number from user and return frequency of 11 Number

Input:	N  6
Elements : 50	11	-11	25	66	11

Outpt:	2
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMEMMRY -100
#define ERRSIZE -101

int CountEleven(int arr[], int iSize,int iNo)
{
	int i=0, iCnt = 0;
	
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
			iCnt++;
		}
	}
	
	return iCnt;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i = 0, j = 0, iRet = 0;
	int iNo = 0;
	
	printf("Enter size of array\n");
	scanf("%d",&iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid input of array size\n");
		return -1;
	}
	
	printf("Enter number to which want to count frequency\n");
	scanf("%d", &iNo);
	
	ptr = (int*)malloc(iSize * sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return -1;
	}
	
	printf("Enter elements of array\n");
	for(i = 0; i < iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Elements of array are\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = CountEleven(ptr,iSize,iNo);
	if(iRet == ERRMEMMRY)
	{
		printf("\nError : Memory allocation fails\n");
	}
	else if(iRet == ERRSIZE) 
	{
		printf("\nError : Invalid input array size\n");
	}
	else 
	{
		printf("\nFrequency of 11 is %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}