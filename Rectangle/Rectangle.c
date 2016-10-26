#include<stdio.h>
#include"Rectangle.h"
#include"Point.h"
#include"Point.c"
struct rectangle
{
    struct point* p1;
    struct point* p2;
    struct point* p3;
    struct point* p4;
    //struct point vert[4];
};
typedef struct rectangle Rectangle;

void printRectangle(Rectangle *r)
{
    printf("(%d, %d)\t", r->p2->x , r->p2->y);
    printf("(%02d, %02d)\n",r->p3->x , r->p3->y);
    printf("(%02d, %02d)\t",r->p1->x , r->p1->y);
    printf("(%02d, %02d)\n\n",r->p4->x , r->p4->y);

}

void printList(Rectangle list[] , int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printRectangle(list+i);
    }
}

double area(Rectangle *r)
{
    return (1234.54);
}

