#include<stdio.h>

int main()
{
    double A,B,C,D,MEDIA;

    scanf("%lf %lf",&A,&B);
    MEDIA= ((3.5*A)+(B*7.5))/(3.5 + 7.5);
    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;
}
