#include<stdio.h>
main()
{
	int i,j,n,a[10],temp;
	printf("enter the number of element=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 printf("a[%d]=",i);
		 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf("\n");
    }
		for(i=0;i<n;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
	
}
