#include <stdio.h>
main()
{
	int t,f,r,s;
	float tp;
	printf("Enter Total Bill Amount: ");
	scanf("%d",&t);
	printf("Enter TIP (5% or 10%):");
	scanf("%f",&tp);
	printf("Enter total no of friends:");
	scanf("%d",&f);
    s=t+(t*tp);
    r=s/f;
	printf("Each One Have to Pay Rs.%d/-",r);
	printf("\n");
	return 0;	
}
