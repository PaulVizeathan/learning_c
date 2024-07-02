#include<stdio.h>
main()
{
	float km,m;
	km=m=0;
	printf("Enter the total distance travelled in Kilometers:");
	scanf("%f",&km);
	m=km*1000;
	printf("The Total distance travelled in Meters:%.2f",m);
	printf("\n");
	return 0;
}
