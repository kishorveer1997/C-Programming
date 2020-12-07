
/*
Problem statement : Accept N number from user and range from user and display all elements from range
				  

Input:	size  6
		Range  10	25
Elements : 50	11	-11	23	66	25

Outpt:	11	 23	   25
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int arr[], int iSize, int iNo1, int iNo2)
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
	if(iNo1 > iNo2)
	{
		printf("Error : Invalid range values\n");
		return;
	}
	
	printf("Number from range are\n");
	for(i = 0; i < iSize; i++)
	{
		if((arr[i] >= iNo1) && (arr[i] <= iNo2))
		{
			printf("%d\t", arr[i]);
		}
	}
}


int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iNo1 = 0, iNo2 = 0;
	int i=0, j = 0;
	
	printf("Enter size of array\n");
	scanf("%d", &iSize);
	if(iSize <= 0)
	{
		printf("Error : Invalid array size input\n");
		return -1;
	}
	
	ptr = (int*)malloc(iSize*sizeof(int));
	if(ptr == NULL)
	{
		printf("Error : Memory allocation fails\n");
		return -1;
	}
	
	printf("Enter array elements\n");
	for(i = 0; i <iSize; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Enter lower range number\n");
	scanf("%d", &iNo1);
	
	printf("Enter Higher range number\n");
	scanf("%d", &iNo2);
	if(iNo1 > iNo2)
	{
		printf("Error : Invalid range input\n");
		return -1;
	}
	
	printf("Array is\n");
	for(j = 0; j < iSize; j++)
	{
		printf("%d\t", ptr[j]);
	}
	printf("\n");
	DisplayRange(ptr,iSize,iNo1,iNo2);
	
	free(ptr);
	
	return 0;
}