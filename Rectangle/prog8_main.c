#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//#include"Rectangle.h"
//#include"Point.h"
#include"Rectangle.h"
#include"Rectangle.c"

int main()
{
    char input;
    struct rectangle *rect = (struct rectangle*)malloc(sizeof(struct rectangle));
    //*rect= (struct rectangle*)malloc(sizeof(struct rectangle));
    int num = 0;

    while(input!='q')
    {
        scanf("%c",&input);
        if(input == 'a')
        {
            int k;
            for(k=0;k<4;k++)
            {
                readPoint((rect+num)->p1);
            }
            num++;
        }
        else if(input == 'p')
        {
            printList(rect , num);
        }
        else if (input == 'd')
        {
            printf("enter an integer");
            int index;
            scanf("%d", &index);
            area(rect+index);
        }
        else if(input == 'o')
        {
            printf("enter 2 integers");
        }

    }
}
