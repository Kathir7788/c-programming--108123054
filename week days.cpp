#include <stdio.h>
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	printf("your day is :");
	switch(a)
{
	case 1:printf("monday");
	break;
	case 2:printf("tuesday");
	break;
	case3 :printf("wednesday");
	break;
	case4 :printf("thursday");
	break;
	case5: printf("friday");
	break;
	case 6:printf("saturday");
	break;
	case 7:printf("sunday");
	break;
}
return 0;
}
