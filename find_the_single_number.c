#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// find the number that occurs singly in an array in which numbers occurs TWICE.
//A is the array of numbers
// n1 is the length of array

int singleNumber(const int* A, int n1)
{
    //logic
    //  bitwise operations are used (on binary numbers)
    //  the numbers occurring twice in the array will contribute a pair of '1' OR '0'
    //  XXXXXperform NAND operation for each number
    // sorry baby NAND DOEN'T WORK
    // USE XOR OPERATION !!!!!!!
    //  this will leave behind the number occurring once.
    int i, j=0;         // fun fact: initialize j to anything .. won't affect the answer
    for(i=0;i<n1;i++)
    {
        //j = ~(j & A[i] );
        j = (~j)&A[i] | j&(~A[i]);      // XOR FUNCTION
                                    // DUDE!!!! .... XOR FUNCTION =  ^ i.e. [A XOR B = A^B]
    }
    return (j);        // NOT WORKING IF THE ANSWER IS 1!! RETURN 0 INSTEAD
}


void main()
{
    int i,j;
    int len = 5;
    const int* arr = (const int*)malloc(len*sizeof(int));
    for(i=0 ;  i<len; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = singleNumber(arr , len);

    printf("answer is %d", ans);
}
/*
 5 5 6 9 6 9 150
 ANS = 150
*/
