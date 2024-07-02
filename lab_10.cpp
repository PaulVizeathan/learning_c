# include<stdio.h>
main()
{
	char ch[50],gen,np[50];
	
	printf("Enter your full name:");
	scanf("%[^\n]",&ch);
	printf("Enter your gender(M/F):");
	fflush(stdin);
	scanf("%c",&gen);
	printf("Enter your native place:");
	scanf("%s",&np);
	
	printf("%s - %c - %s",ch,gen,np);
	printf("\n");
	return 0;
}
