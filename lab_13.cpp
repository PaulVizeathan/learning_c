#include<stdio.h>
main()
{
	float tf,tc;
	tf=tc=0;
	printf("Enter temperature in Fanrenheit:");
	scanf("%f",&tf);
	tc=(tf-32)*5/9;
	printf("Temperatue in Celsius: %f",tc);
	printf("\n");
	return 0;
}
