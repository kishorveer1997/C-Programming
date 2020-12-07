
/*
Problem statement : Accept N number from user and return elements which are divisible by 5.

Input:	N  6
Elements : 85	66	3	80	93	88

Outpt: 85	80
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDivFive(int arr[], int iSize)
{
	int i=0;
	
	if(arr == NULL)
	{
		printf("Error : Memmory alocation fails\n");
		return;
	}
	if(iSize <= 0)
	{
		printf("Error : Invalid size of array\n");
		return;
	}
	
	printf("\nElements which are divisible by 5 are\n");
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] % 5 == 0)
		{
			printf("%d\t",arr[i]);
		}
	}
	
}

int main()
{
	int *ptr;
	int iSize = 0;
	int i=0, j = 0;
	
	printf("Enter array size \n");
	scanf("%d",&iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid input size\n");
		return -1;
	}
	
	ptr = (int*)malloc(iSize * sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : MEmory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Array elements are\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	DisplayDivFive(ptr,iSize);
	
	return 0;
}