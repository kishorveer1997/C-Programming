
/*
Problem statement : Accept N number from user and display all numbers which are multiple of 11

Input:	N  6
Elements : 50	33	-11	25	66	2

Outpt:	33	 -11	66
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayMultBy11(int arr[], int iSize)
{
	int i= 0;
	
	if(arr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return;
	}
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return;
	}
	
	printf("\nArray elemenst which are multiple of 11 are\n");
	for(i = 0; i < iSize;i++)
	{
		if((arr[i] % 11 == 0))
		{
			printf("%d\t",arr[i]);
		}
	}
}

int main()
{
	int iValue = 0;
	int *ptr = NULL;
	int i=0, j = 0;
	
	printf("Enter size of array\n");
	scanf("%d", &iValue);
	if(iValue <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	ptr = (int*)malloc(iValue*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i < iValue;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Array elements are\n");
	for(j = 0; j <iValue;j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	DisplayMultBy11(ptr,iValue);
	
	free(ptr);
	
	return 0;
}