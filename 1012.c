#include<stdio.h>
int main()
{
    double A,B,C,triangle,cir,rec,trap,squ;
    scanf("%lf %lf %lf",&A,&B, &C);

    triangle = 0.5 * A * C;
    printf("TRIANGULO: %.3lf\n",triangle);

    cir = ((3.14159) * C*C);
    printf("CIRCULO: %.3lf\n", cir);

    trap = (0.5 * (A+B) * C);
    printf("TRAPEZIO: %.3lf\n",trap);

    squ = B*B;
    printf("QUADRADO: %.3lf\n",squ);

    rec = A*B;
    printf("RETANGULO: %.3lf\n",rec);

    return 0;
}
