#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int singleNumber(const int* A, int n1)
{
    int i;
    int first= 0, second=0 ;
    for(i=0;i<n1;i++)
    {
        first = (first^ A[i]) & (~second) ;
        second = (second ^ A[i]) & (~first) ;

    }
    return (first);
}



void main()
{
    int i,j;
    int len = 10;
    const int* arr = (const int*)malloc(len*sizeof(int));
    for(i=0 ;  i<len; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = singleNumber(arr , len);

    printf("answer is %d", ans);
}
/*
test case

2 2 2
3 3 3
5 5 5
15

ans = 15
*/
