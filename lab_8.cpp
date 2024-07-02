#include <stdio.h>
main()
{
	int d,y,m,w,da;
	d=y=m=w=da=0;
	
	printf("Enter no of days:");
	scanf("%d",&d);
	
	y=d/365;
	m=(d%365)/30;
	w=((d%365)%30)/7;
	da=((d%365)%30)%7;
	
	printf("Years: %d",y);
	printf("\nMonths: %d",m);
	printf("\nWeeks: %d",w);
	printf("\nDays: %d",da);

	printf("\n");
	return 0;
	
}
