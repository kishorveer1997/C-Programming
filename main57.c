
/*
Problem statement : Accept N number from user and display 3 digit number from array.

Input:	size  6
		
Elements : 151	66	3	700	10	-188

Outpt:	151		700 	-188
*/

#include<stdio.h>
#include<stdlib.h>


void DisThreeDigNo(int arr[], int iSize)
{
	int i = 0, iCnt = 0;
	int iNo = 0;
	
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
	
	printf("\nThree digit number is\n");
	for(i =0; i < iSize; i++)
	{
		iNo = arr[i];
		iCnt = 0;
		
		while(iNo != 0)
		{
			iNo = iNo / 10;
			iCnt++;
			if(iCnt > 3)
			{
				break;
			}
		}
		
		if(iCnt == 3)
		{
			printf("%d\t", arr[i]);
		}
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
	
	DisThreeDigNo(ptr,iSize);
	
	free(ptr);
	
	return 0;
}