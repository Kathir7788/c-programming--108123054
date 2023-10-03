#include <stdio.h>
int main ()
{
	int r,b,h,d,t,g;
	printf("enter basic salary");
	scanf("%d",&b);
	printf("enter the region");
	scanf("%d",&r);
	d=(44*b)/100;
	t=(8*b)/100;
	if (r==1)
{
	h=(27*b)/100;
}
else if (r==2)
{
	h=(24*b)/100
}
else if (r==3)
{
	h=(16*b)/100
}
else
{
	h=(12*b)/100
}
g=b+h+d+t
printf("gross amount is %d",g);
return 0;
}
