#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number of days in month: ");
    scanf("%d",&a);
    printf("Enter starting day of the week(1=Sun, 7=Sat): ");
    scanf("%d",&b);
    if((8 - b) == 7)
        c = 0;
    else
        c = (8 - b);
    printf("日\t一\t二\t三\t四\t五\t六\n");
    for(int i = 1;i < b;i++)
        printf("\t");
    for(int j = 1;j <= a;j++)
    {
        printf("%d\t",j);
        if(j % 7 == c)
            printf("\n");
    }
    return 0;

}
