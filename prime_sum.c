#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int a)
{
    int i, j;
    j = sqrt(a);
    for(i=2;i<=j;i++)
    {
        if(a%i == 0)
            return 0;
    }
    return 1;
}

int* psum(int num , int* len)   // e.g. 10 = 7 + 3 ; 100 = 97 + 3
{
    int i,j,x ;
    j = (num)/2 ;

    if(num ==4)             // special test case. rest answers will always be odd
    {                       // 2 is the only even prime.
        len[0] = 2 = len[1] ;
        return len;
    }

    for(i=num-1 ;i>=j ; i=i-2)   // running loop from the reverse side.
    {
        x = isprime(i);
        if(x)                   // if num is prime , check if num-i is prime to find 2n num.
        {
            if( isprime(num-i)==1 && num-i!= 1 )      // 1 is not prime.
            {
                len[0] = num-i;
                len[1] = i;
                return len;
            }
        }

    }
}

void main()
{
    int num;
    scanf("%d",&num);
    int* len = (int*)malloc(2*sizeof(int));
    len = psum(num, len);
    printf("%d %d", len[0], len[1]);
}
