#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void reverseBits(unsigned int A)        //  1101 0000 0000 0000 0101 1111 0000 1110    should be reversed to:-
{                                       //  0111 0000 1111 1010 0000 0000 0000 1011
    int i , j ;
    int left_bit , right_bit;
    int len = 32;
    for(i=0;i<16;i++)           //divide the 32bit number into left(16 bit) and right(16bit).
    {
        left_bit = A&(0x80000000 >> i) ;    // checks the left side bits one-by-one.
        right_bit =A&(0x00000001 << i);     // checks the right side bits one-by-one.
        if(left_bit^right_bit)             // if the two bits differ, swap them.
        {
            //swap the bits
            A = A ^ (0x80000000 >> i) ;
            A = A ^ (0x00000001 << i);
        }
    }
     printf("%u" , A);
}

void  main()
{
    int num;
    scanf("%d",&num);
    reverseBits(num);
}

//4294967295 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!1 not working for this case i.e. when all bits are 1.
