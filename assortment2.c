#include<stdio.h>
main()
{
	int array[100],n,i;
	int max1,max2,min;
	printf("enter the number of array=");
	scanf("%d",&n);
	printf("enter the element=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
		
	}
	max1=max2=min;
	for(i=0;i<n;i++)
	{
		if(array[i]>max1)
		{
			max2=max1;
			max1=array[i];
			
		}
		else if(array[i]>max2&&array[i]<max1)
		{
			max2=array[i];
		}
	}
	printf("second largest=%d",max2);
}
