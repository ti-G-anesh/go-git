#include<stdio.h>
void main()
{
	int i,arr[5];
	printf("Input the data:\n");
	
	for(i=0;i<5;i++)
	{
		printf("num[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Entered numbers are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}