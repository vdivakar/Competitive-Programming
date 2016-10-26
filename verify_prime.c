#include<stdio.h>
#include<math.h>

void main()
{
    int number;
    scanf("%d", &number);
    int sq;
    sq = sqrt(number);
    int i;
    if(number== 1)
    {
        printf("not a prime");
        return;
    }
    for(i=2;i<=sq;i++)
    {
        if(number%i == 0)
        {
            printf("not a prime");
            return ;
        }
    }
    printf("prime");
}
