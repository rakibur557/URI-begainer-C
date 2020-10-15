#include<stdio.h>
void main()
{
    int startTime, endTime,duration;
    scanf("%d %d",&startTime,&endTime);

    duration = (endTime - startTime);

    if(duration<0)
    {
        duration = 24 + (endTime - startTime);
    }
    if(startTime==endTime)
        printf("O JOGO DUROU 24 HORA(S)\n");

    else
        printf("O JOGO DUROU %d HORA(S)\n",duration);

}
