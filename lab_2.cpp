#include<stdio.h>
main()
{
	int ip,cc,t;
	printf("Enter the price of iPhone:");
	scanf("%d",&ip);
	printf("Enter the price of cover case:");
	scanf("%d",&cc);
	t=ip+cc;
	printf("iPhone: %d",ip);
	printf("\nCover case: %d",cc);
	printf("\nTotal: %d",t);
}
