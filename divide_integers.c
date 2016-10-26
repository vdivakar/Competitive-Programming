#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

/*                                                 // NOT EFFECIENT METHOD
 * @input dividend : Integer                       // HIGH TIME COMPLEXITY.
 * @input divisor : Integer
 *
 * @Output Integer
 */
int divide(int dividend, int divisor)
{
    int i = dividend , j = divisor;
    int count = 0;
    while(i >=j)
    {
        i = i - j;
        count++;
    }
    return count;
}


void main()
{
    int i , j ;
    int ans  = divide(21474, );
    printf("ans = %d",ans);
}
