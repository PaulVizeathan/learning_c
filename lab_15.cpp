#include <stdio.h>
main()
{
	int a,b,r;
	a=b=r=0;
	printf("Enter a no:");
	scanf("%d",&a);
	printf("Enter a no:");
	scanf("%d",&b);
	r=(a+b)*(a+b);
	printf("Your answer: %d",r);
	printf("\n");
	return 0;
}
