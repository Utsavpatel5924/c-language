#include<stdio.h>

int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9,},b[3][3]={11,12,13,14,15,16,17,18,19,};

	

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("%d ",a[i][j]);
			
		
		}
		
		printf("\n");
	}
	

	

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("%d ",b[i][j]);
			
		
		}
		
		printf("\n");
	}
	printf("\n");

	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
		
			printf("%d ",a[i][j] + b[i][j]);
			
		
		}
		
		printf("\n");
	}

	
	return 0;
}