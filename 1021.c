// Problem, See solution [ gfgfg.c ] in desktop.

#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);

    printf("NOTAS");
    printf("%f nota(s) de R$ 100.00\n",n/100);
    n %= 100;
    printf("%f nota(s) de R$ 100.00\n",n/50);
    n %= 50;
    printf("%f nota(s) de R$ 100.00\n",n/20);
    n %= 20;
    printf("%f nota(s) de R$ 100.00\n",n/10);
    n %= 10;
    printf("%f nota(s) de R$ 100.00\n",n/5);
    n %= 5;
    printf("%f nota(s) de R$ 100.00\n",n/2);
    n %= 2;
    printf("%f nota(s) de R$ 100.00\n",n);

    return 0;
}
