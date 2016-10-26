#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int a, int b)
{
    int i, j, rem;
    if(b == 0)      // checking for 0.
    {
        if(a == 0)      // if both 0, return 0
            return 0;
        else
            return a;       // else return the other number
    }

    if (a%b ==0)
        {printf("result1 :%d", b);
        return b;
        }

    while(a%b != 0)
    {
        rem = a%b;
        a = b;              //divide divisor by remainder
        b = rem;
        if(a%b == 0)
            {printf("result :%d ",b);
            return b;
            }
    }
}


void main()
{
    int a, b, result;
    scanf("%d%d",&a,&b);

    if(a>b)
        result = gcd(a,b);
    else
    {
        result = gcd(b,a);
    }
}
