#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char* convertToTitle(int A)
{
    int i=0,j,len=0 , rem;
    int num = A;

    char *tarray = (char*)malloc(50*sizeof(char));

    while(num>0 )
    {
        rem = num % 26;
        num = num/26;
        if(rem ==0)                         //pay attention
            {
                tarray[i] = 'Z' ;           // to
                num--;                      // this IF loop!!!!
            }
        else
            tarray[i] = 64 + rem ;
        i++ ;
        len++;
    }
    tarray[i] = '\0' ;

    char* result = (char*)malloc(len*sizeof(char));

    for(i=0;i<len;i++)              //reversing the array
    {
        result[i] = tarray[len-i-1];

    }
    result[len] = '\0' ;        //last ending character.
    return result;

}

void main()
{
    int a=1;
    while(a!=111)
    {
        scanf("%d",&a);
            printf("%s", convertToTitle(a));    // convert 1->A ....26->Z , 27->AA ...


    }
}
