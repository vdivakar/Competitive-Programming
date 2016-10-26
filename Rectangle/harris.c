#include<stdio.h>

void find_average()
{
    int i;
    int min=-1;
    int x,a;
    int sum = 0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a);
        if(min==-1)
        {
            min = a;
        }
        else if ( a<min)
        {
            min =a;
        }
        sum+=a;
    }
    float av = sum/4.0;
    float after_av = (sum - min) /3.0;
    printf("average score before dropping %f\n", av);
    printf("average score after dropping %f\n", after_av);
    printf("***average score increased by %f\n\n", (after_av - av)*100/av);

}


 int main()
 {
     int i=0;
     for(i=1;i<6;i++)
     {
         printf("enter 4 test cases for student #%d :",i);
         find_average();
     }

 }
