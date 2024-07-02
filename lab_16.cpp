#include <stdio.h>
main()
{
	double r,a;
	const float PI=3.14;
	printf("Enter Radius of the circle:");
	scanf("%lf",&r);
	a=PI*r*r;
	printf("Area of the Circle: %lf",a);
	printf("\n");
	return 0;
}
