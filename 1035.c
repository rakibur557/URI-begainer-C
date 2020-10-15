#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d", &A,&B,&C,&D);

    switch((B>C) && (D>A) && (C+D > A+B) && (C>0) && (D>0) && (A%2 == 0))
    {
        case 1: printf("Valores aceitos\n");
        break;

        default: printf("Valores nao aceitos\n");
        break;
    }

    return 0;
}
