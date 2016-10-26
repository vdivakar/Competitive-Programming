#include<stdio.h>
//#include"Point.h"

struct point
{
    int x;
    int y;
};

typedef struct point Point;
void printPoint(Point *p)
{
    printf("(%d, %d)", p->x , p->y);
}

void readPoint(Point *p)
{
    scanf("%d%d", p->x , p->y);
}

double dist(Point *p1 , Point *p2)
{
    return (p1->x + p2->x); // not the correct formula
                    //temporary // to be modified later
}




