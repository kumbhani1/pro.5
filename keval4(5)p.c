#include<stdio.h>

main()

{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("Enter  of the value matrix 1=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter of the value  matrix 2=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("matrix c  value is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	
			printf("%d ",c[i][j]);
		}
			printf("\n");

	}
	}

