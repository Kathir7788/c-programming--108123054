#include<stdio.h>
int main()
{
                                    
	int i,j,a,n,arr[i];
	printf("number of elements in an array");
	scanf("%d",&n);
	printf("enter the elements");
	for (i=0;i<n;++i)
	scanf("%d",&arr[i]);
    for(i=0;i<n;++i)
{

		for (j=i+1;j<n;++j)
	{
		if (arr [i]>arr[j])
		{
			a=arr[i];
			arr[i]=arr[j];
			arr[j]=a;
		}
	}
}
	printf("the numbers in ascending order is");
	for (i=0;i<n;++i)
	{
		printf("%d,",arr[i]);
	}
}
