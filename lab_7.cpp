# include <stdio.h>
int main()
{
    int t,h,m;
    t=h=m=0;
    
    printf("Enter flying time from Hyderabad to Singapore in minutes: ");
    scanf("%d",&t);
    
    h=t/60;
    m=t%60;
    
    printf("Flying time from Hyderabad to Singapore is %d hrs and %d minutes",h,m);
    printf("\n");

    return 0;
}
