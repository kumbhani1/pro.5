#include<stdio.h>

main()
{
	int a[3][3]={{10,20,30},
	             {40,50,60},
                 {70,80,90}};
				
	int sum=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    {
	    	if(i==j)
	    	{
	    		sum=sum+a[i][j];
			}
	    }
	}
	printf("sum of daignal =%d",sum);
}
