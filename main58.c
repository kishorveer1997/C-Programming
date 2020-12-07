
/*
Problem statement : Accept N number from user and display summation of each digit of number from array.

Input:	size  6
		
Elements : 151	66	3	700	10	-188

Outpt : 7	12	 3 		7 	1 	17
*/

#include<stdio.h>
#include<stdlib.h>

void DisSumOfDigit(int arr[], int iSize)
{
	int i = 0, iNo = 0, iSum = 0;
	
	if(arr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return;
	}
	
	if(iSize <= 0)
	{
		printf("Error : Invalid array size\n");
		return;
	}
	
	printf("\nSummation of digit of number are\n");
	for(i =0; i < iSize; i++)
	{
		iSum = 0;
		if(arr[i] < 0)
		{
			iNo = -arr[i];
		}
		else 
		{
			iNo = arr[i];
		}
		
		while(iNo != 0)
		{
			iSum = iSum + (iNo%10);
			iNo = iNo /10;
		}
		printf("%d\t", iSum);
	}
	
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int i = 0, j = 0;
	
	printf("Enter arra size\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size\n");
		return -1;
	}
	
	ptr = (int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory alocation fails\n");
		return -1;
	}
	
	printf("Enter array elenets\n");
	for(i = 0; i < iSize; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Array is\n");
	for(j =0; j < iSize; j++)
	{
		printf("%d\t", ptr[j]);
	}
	
	DisSumOfDigit(ptr,iSize);
	
	free(ptr);
	
	return 0;
}