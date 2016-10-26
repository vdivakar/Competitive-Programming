#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int reversenum(int A)
{
    int i, j, len=0 , flag;
    j=abs(A);
    if(A<0)         // so that it reverses negative numbers too
        flag = 1;
    while(j!= 0)        //finding length
    {
        j = j/10;
        len++;
    }

    j=abs(A);
    char* arr = (char*)malloc(len*sizeof(char));
    for(i=0;i<len;i++)
    {
        arr[i] = '0' + j%10;        //saving LSB into char array.
        j= j/10;
    }
    long r_num = atol(arr);      //converting to long
    printf("%l", r_num);


    if(r_num>0x7fffffff)        // TO CHECK OVERFLOW
    {
        return 0;
    }

    if(flag == 1)
        return r_num*(-1) ;     // negative or non-negative output
    return r_num;
}


void main()
{
    int num;
    scanf("%d",&num);

    int x = reversenum(num);
    printf("%d",x);

}
