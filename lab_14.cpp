//1rup=100p
#include<stdio.h>
main()
{
	int rp;float ps;
	rp=ps=0;
	printf("Enter amt in Rupees:");
	scanf("%d",&rp);
    ps=rp*100;
    printf("Paise: %f",ps);
    return 0;
}
