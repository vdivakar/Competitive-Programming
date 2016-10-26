#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int checkprime(int num)
{
    int i,j;
    int sq = sqrt(num);
    if(sq*sq == num)        //check if it is a perfect square
        return 0;

    for(i=2;i<=sqrt(num);i++)           //check if a no. divides it
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void findprimes(int num)            // sending numbers for checking.
{
      int i,j;
      for(i=3;i<=num;i++)
      {
          j = checkprime(i);
          if( j == 1)
          {
              printf("%d ",i);
          }
      }
}


void primes_optimised(int num       // removes even number and multiples of odd numbers
{
    int i, j, arr[num+1];
    for(i=0;i<num;i++)
        arr[i] = 1;
    for(i=2;i<=num;i++)
    {
        if(i%2==0 && i!=2)
        {
            arr[i]=0;
            continue;
        }
        for(j=2;i*j<=num;j++)
        {
            arr[i*j] = 0;
        }
    }
    for(i=1;i<num;i++)
        if(arr[i] == 1)
        printf("%d ", i);
}

void main()
{
    int num, i, j;
    scanf("%d",&num);
    primes_optimised(num);
    return;

    if(num>1)
    {
        printf("2 ");
        if(num>2){
            findprimes(num);
        }
    }

}
