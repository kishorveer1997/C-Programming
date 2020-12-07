/*
Problem statement : Accept N number from user and return difference betwwen summation
					of even elements and summation of odd elements.

Input:	N  6
Elements : 85	66	3	80	93	88

Outpt: 53 (234 -181 )
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMEMRY -1
#define ERRSIZE -2

int DiffEvenOdd(int arr[], int iSize)
{
	int i = 0;
	int iEven = 0, iOdd = 0;
	
	if(arr == NULL)
	{
		return ERRMEMRY;
	}
	if(iSize <= 0)
	{
		return ERRSIZE;
	}
	
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] % 2 == 0)
		{
			iEven = iEven + arr[i];
		}
		else 
		{
			iOdd = iOdd + arr[i];
		}
	}
	
	return (iEven - iOdd);
}

int main()
{
	int iSize = 0, iRet = 0;
	int *ptr;
	int i = 0, j = 0;
	
	printf("Enter size of arrays\n");
	scanf("%d",&iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	if(ptr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i =0; i < iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("array elements\n");
	for(j =0; j < iSize;j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = DiffEvenOdd(ptr,iSize);
	if(iRet == ERRMEMRY)
	{
		printf("Error : Memory alocation fails\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("Error : Invalid input\n");
	}
	else 
	{
		printf("\nDifference between Even and Odd elememts is %d\n",iRet);
	}
	
	
	return 0;
}