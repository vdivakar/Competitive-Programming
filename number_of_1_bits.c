#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int numSetBits(unsigned int A)
{
    int i, count=0;
    unsigned int x = 01;
    for(i=0;i<32;i++)
    {
       //printf("%d \n",A&x);
        if(A&x == 1)
            {count++;}
        // A>>1; .......... wrong!!! value of A is not modified here.
        A= A>>1;
        //printf("%d ",A);
    }
    return count;

}


void main()
{
    int x;
    scanf("%d",&x);
    printf("answer %d ", numSetBits(x));
}
