#include <stdio.h>
main()
{
	char d,e,f;
	printf("Enter 3 characters:");
	scanf("%c%c%c",&d,&e,&f);
	
	printf("Reverse of %c%c%c is %c%c%c",d,e,f,f,e,d);
	printf("\n");
	return 0;
}
