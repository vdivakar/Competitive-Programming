#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int isPower(int A)      // if a num can be expressed as power of two num
{                       // e.g.  16 = 2^4
    int i, j=0, sq, x=1;
    sq = sqrt(A);

    for(i=sq; i>=2; i++)        // starting from sqrt to 2
    {
        if(A%i == 0)
        {
            x = i;
            while(x<= A)        //checking if s num^a = A
            {
                if(x == A)
                    return 1;
                x = x*i;
            }
        }
    }
    return 0;

}

void main()
{
    int num;
    scanf("%d",&num);
    int x = isPower(num);
    printf("%d",x);
}

/*
for(j=0; x<=A; j++ )
            {
                x = pow(i,j);
                            printf("%d ",x);
                if(x == A)
                {
                    return 1;
                }
            }
*/
