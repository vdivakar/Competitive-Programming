#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void swap(int a, int b)
{
    a= a^b;         //XOR functions.
    b=a^b;
    a=a^b;

    printf("new values:  %d %d", a,b);
}

void main()
{
    swap(3 , 7);
}
