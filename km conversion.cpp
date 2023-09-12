/* to convert km to m ,cm and mm*/
#include <stdio.h>
int main()
{
	  int a,b,c,d;
	  printf("value in km=");
	  scanf("%d",a);
	  printf("value in m =");
	  scanf("%d",b);
	  //to convert km into m
	  b=a*1000;
	  printf("value in cm=");
	  scanf("%d",c);
	  //to convert km into cm
	  c=a*100;
	  printf("value in mm=");
	  scanf("%d",d);
	  //to convert km into mm
	  d=a*1000000;
	  return 0;
	  
}
