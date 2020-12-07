
#include<stdio.h>

float AreaOfRect(float width, float length)
{
	float Area = 0.0;
	
	if(width < 0 || length < 0)
	{
		return -1;
	}
	
	Area = width * length;
	
	return Area;
	
}

int main()
{
	float Value1 = 0.0, Value2 = 0.0;
	float Ret = 0.0;
	
	printf("Enter width of Rectamgle\n");
	scanf("%f",&Value1);
	
	printf("Enter length of Recangle\n");
	scanf("%f",&Value2);
	
	if(Value1 < 0 || Value2 < 0)
	{
		printf("Error : Invalid Input\n");
		return -1;
	}
	
	Ret = AreaOfRect(Value1,Value2);
	if(Ret == -1)
	{
		printf("Error : Invalid Input\n");
	}
	else 
	{
		printf("Area of Recangle is %f\n",Ret);
	}
	
	return 0;
}