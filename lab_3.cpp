#include <stdio.h>
main()
{
	int bill,amtpd,bal;
	bill=amtpd=bal=0;
	printf("Enter the total bill amout:");
	scanf("%d",&bill);
	printf("Enter the amount paid by the customer:");
	scanf("%d",&amtpd);
	bal=amtpd-bill;
	printf("Balance amount to be returned is: Rs.%d/-",bal);
	return 0;
}
