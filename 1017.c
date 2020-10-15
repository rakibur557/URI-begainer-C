#include<stdio.h>
int main()
{
    double time,avg_speed,fuel;
    scanf("%lf %lf",&time,&avg_speed);

    fuel = (time * avg_speed)/12;
    printf("%.3lf\n",fuel);


    return 0;
}
