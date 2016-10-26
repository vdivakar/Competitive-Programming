#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void reverse(int A)
{
    unsigned int rev = 0 , m= 31;
    while(A)
    {
        if(A&1)
            rev = rev|1 << m;
        A = A>>1;
        m--;
    }
    printf("ans %u", rev);
}

void main()
{
    int x;
    scanf("%d",&x);
    reverse(x);
}
