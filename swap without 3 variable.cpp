/* to swap two numbers without third variable*/
#include <stdio.h>
int main()
{
	int a,b;
	printf("first number=");
	scanf("%d",&a);
	printf("second number =");
	scanf("%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	return 0;
}
