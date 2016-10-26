#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void allFactors(int num)
{
    int sqrtnum ,i ,j=0;
    int *factors = (int*)malloc(1000*sizeof(int));
    sqrtnum = sqrt(num);
    for(i=1; i<=sqrtnum; i++)   // check till the square root
    {
        if(num%i == 0)
        {
            *(factors+j) = i;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ", factors[i]);
    }
    for(i=j-1;i>=0;i--)
    {
        if(factors[i]*factors[i] != num )  // avoiding double printing of squareroot of number
        {
            printf("%d ", num/factors[i]);// number divided by the factors found intially
                                            // will give the remaining factors.
        }
    }
}

void main()
{
    int num;
    scanf("%d",&num);
    allFactors(num);
}
