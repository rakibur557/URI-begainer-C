#include<stdio.h>

int main()
{
    double A,B,C,MEDIA;

    scanf("%lf %lf %lf",&A,&B, &C);
    MEDIA= ((2*A)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}
