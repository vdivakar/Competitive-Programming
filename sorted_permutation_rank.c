#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fact(int x)
{
    if(x==1 || x==0)
        return 1;
    else
        return x*fact(x-1)%1000003;     // %1000003 checks for overflow
}

int findrank(char *A)               // find the rank of each letter
{
    int i=0,j, rankele =0, len=0 ,x;
    char* num;
    num=A;
    while(num[i]!='\0')
    {
        len++;
        i++;
    }

    if(len == 1)        //base case for recursion.
        return 0;

    int rank_arr[len];      // stores the ranks of each letter
    int count=0;
    for(i=0;i<len;i++)      //find the rank of the each letter
    {
        x= num[i];
        count = 0;
        for(j=0;j<len;j++)
        {
            if(num[j] < x)
                count++;
        }
        rank_arr[i] = count+1;
    }
    //printf("%d ",rank_arr[0]);


    return rankele =  (rank_arr[0]-1) * fact(len-1) + findrank(A+1) ;       //recursion. new ranks for new string.
}


void main()
{
    int a;
    a = findrank("PNDA");
     printf("rank: %d", (a+1)%1000003);

}
