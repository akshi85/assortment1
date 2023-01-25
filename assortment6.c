#include<stdio.h>
main()
{
	int a[10][10];
	int i,j,sum=0;
	for(i=0;i<=2;i++)
	{
		 for(j=0;j<=2;j++)
		 {
		 	printf("enter value=");
		 	scanf("%d",&a[i][j]);
		 }
		 
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    {
	    	printf("%d",a[i][j]);
	    	if(i==j)
	    	{
	    		sum=sum+a[i][j];
			}
		}
		printf("\n");
	}
	printf("sum=%d",sum);
}
