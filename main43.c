
/*
Problem statement : Accept N number from user and return elements which are even and divisible by 5.

Input:	N  6
Elements : 50	25	63	3	-125	2

Outpt:	50	25	-125
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDiv(int arr[],int iSize)
{
	int i = 0;
	
	if(arr == NULL)
	{
		printf("Error : Memmory alocation fails\n");
		return;
	}
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return;
	}
	
	printf("\nNumbers which are even and divisible by 5 are\n");
	for(i=0; i < iSize; i++)
	{
		if((arr[i] % 5 == 0) && (arr[i] % 2 == 0))
		{
			printf("%d\t",arr[i]);
		}
	}
	
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i=0, j =0;
	
	printf("Enter size of array\n");
	scanf("%d",&iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid size input\n");
		return -1;
	}
	
	ptr = (int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : memory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i=0; i < iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Array elements are\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	DisplayDiv(ptr,iSize);
	
	return 0;
}