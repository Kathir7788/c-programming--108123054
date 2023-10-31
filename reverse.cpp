#include <stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i,n;
	for (i=0;i<2;i++)
	{
		n=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=n;
	}
	for (i=0;i<5;i++)
	printf("%d",arr[i]);
}
