#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int division(int dividend, int divisor)
{
    int i=1;
    int A, M , Q;
    M = divisor;
    Q = dividend;
    A= 0;
    int bits = 0;

    while(A>i)
    {
        i = i<<1;
        bits++;
    }
    printf("%d", bits);
    for(i=0;i<bits;i++)
    {

    A = A<<1;
    Q = Q<<1;
    if(A>=0)
    {
        A = A-M;
    }
    else if(A<0)
    {
        A = A+M ;
    }
    if(A<0)
        Q = Q +0;
    else
        Q = Q + 1;
    }
    if(A<0)
        A =A+M;

    printf("quotient %d , rem %d", Q , A);

}

void main()
{

    int i , j;
    scanf("%d %d", i , j);
    division(i,j);
}
