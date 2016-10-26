#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void findDigitsInBinary(int A)
{
    int i, Q, j, R;
    Q = A;
    j = 0;
    char* result = (char*)malloc(100*sizeof(char));
    int* arr = (int*)malloc(100*sizeof(int));
    while(Q!=0)                 //converting to binary
    {
        R = Q%2 ;
        Q = Q/2;
        result[j] = '0' + R;       //saving an int to char
        j++ ;
    }
    i=0;
    j--;
    while(result[j]!= NULL)     //reversing the char array
    {
        arr[i] = result[j];
        i++;
        j--;
    }
    for(j=0;j<i-1;j++)
    {
        printf("%c",arr[j]);
    }
    printf("\nlength is %d", i-1);
}



void main()
{
    int num;
    scanf("%d",&num);
    findDigitsInBinary(num);

}
