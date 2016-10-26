#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int titleToNumber(char* A)      //A->1 .... Z->26 , AA->27 ....
{
    int i=0, j, len=0 , x;
    char* num;
    num = A;

    while(num[i]!='\0')         //finding length
    {
        len++;
        i++;
    }
   // printf("%d",len);

    int ans=0 ;
    int a=0;
    for(i=len-1;i>=0;i--)          // same as base of 26
    {
        x = num[len - i - 1] - 64;      //extracting first element.
        a = i ;
        int k =26;
        j = pow(k,a);           // wtf! ... 26^1 = 25 ??????
        printf("%d\n", j);
        ans = ans + (x*j ) ;
    }

    return ans;
}


void main()
{

    printf("%d",titleToNumber("AAA"));    // string "AA"
}
