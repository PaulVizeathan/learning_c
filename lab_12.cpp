#include <Stdio.h>
main()
{
	char ch,h;
	printf("Enter any Upper-case Alphabet from A to Z:");
	scanf("%c",&ch);
	h=ch+32;
	printf("Lower case form of %c is: %c",ch,h);
	printf("\n");
	return 0;
	
}
