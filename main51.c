
/*
Problem statement : Accept N number from user and accept one number from user and 
				  return index of last occurence of that number

Input:	size  6
		No   25
Elements : 50	11	-11	25	66	25

Outpt:	5
*/

#include<stdio.h>
#include<stdlib.h>

#define ERRMEMMRY -1
#define ERRSIZE -2
#define NUMBABS -3

int ChkLastOcc(int arr[], int iSize, int iNo)
{
	int i = 0;
	
	if(arr == NULL)
	{
		return ERRMEMMRY;
	}
	if(iSize <= 0)
	{
		return ERRSIZE;
	}
	
	for(i = iSize-1; i >=0; i--)
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
		return NUMBABS;
	}
	
}

int main()
{
	int iSize = 0, iNo = 0, iRet = 0;
	int *ptr = NULL;
	int i = 0, j = 0;
	
	printf("Enter size of array\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size\n");
		return -1;
	}
	
	printf("Enter number that you want to check last Occurence");
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
		printf("%d\t", ptr[j]);
	}
	printf("\n");
	
	iRet = ChkLastOcc(ptr,iSize,iNo);
	if(iRet == ERRMEMMRY)
	{
		printf("Error : Memory allocation fails\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("Error : Invalid array size input\n");
	}
	else if(iRet == NUMBABS)
	{
		printf("The number %d is absent in array\n",iNo);
	}
	else 
	{
		printf("The last Occurence of  number %d is %d\n",iNo,iRet);
	}
	
	free(ptr);
	
	return 0;
}