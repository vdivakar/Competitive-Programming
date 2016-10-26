#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int trailingzeroes(int A)           // the formula is:- num/5 + num/25 + num/125 + .....
{
    int  num = A, quo;
    int div = 5;
    int count=0;

    while(1)
    {
        quo = num/div ;
        count = count + quo ;
        if( quo >= 5)           //dont forget the "=" sign.
        {
            div = div * 5;
            continue ;
        }
        break;
    }
    return count ;

}

void main()
{
    int a;
    scanf("%d",&a);
    int result = trailingzeroes(a);
    printf("%d", result);
}
