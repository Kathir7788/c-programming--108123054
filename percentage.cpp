/* to calculate percentage of student */
#include<stdio.h>;
int main()
{
	int a,b,c,d,e,f;
	printf("enter the subject marks");
	scanf("%d%d%d%d%d,&a,&b,&c,&d,&e,&f");
	f=a+b+c+d+e/5;
	printf("the percentage of student is %d,f");
	return 0;
}
