#include<stdio.h>
main()
{
	int i,n,a[100];
	printf("enter the number of array element=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		
		printf("all negative element in array=%d\n",a[i]);
	    }
    
	}
}
