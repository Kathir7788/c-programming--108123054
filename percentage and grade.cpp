#include <stdio.h> 
int main()
{
	float a,b,c,d,e,f;
	printf("enter maths marks");
	scanf("%f",&a);
	printf("enter physics marks ");
    scanf("%f",&b);
    printf("enter chemistry marks");
    scanf("%f",&c);
    printf("enter biology marks");
    scanf("%f",&d);
if (f>=90)
{
	printf("\n grade A");
}
else if (f>=80)
{
	printf("\n grade B");
}
else if (f>=70)
{
	printf("\n grade C");
}
else if (f>=60)
{
	printf("\n grade D");
}
else if (f>=40)
{
	printf("\n grade E");
}
else
{
	printf("\n grade F");
}
return 0;
}
