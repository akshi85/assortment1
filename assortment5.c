#include<stdio.h>
main()
{
	int i,j,m,n,a[10][10];
	printf("enter the value of row=");
	scanf("%d",&n);
	printf("enter the value of column=");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]>a[j])
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("transpos matrix=\n");
	}
	printf("transpos matrix=\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
}
