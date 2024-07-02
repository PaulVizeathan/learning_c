#include<stdio.h>
main()
{
	int a,b;
	a=b=0;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Value of a is: %d",a);
	printf("\nValue of b is : %d",b);
	
	return 0;
    	
}
