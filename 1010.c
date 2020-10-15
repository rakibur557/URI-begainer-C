/*
    Here, code - exceptional
    product1 and unit of amount = 1*amount
    product2 and unit of amount = 2*amount

*/

// operator res+= b*c means
// final res= previous res + (b*c)
#include<stdio.h>
int main()
{
    int a,b;
    double c, res;
    scanf("%d %d %lf",&a,&b,&c);
    res = b*c;
    scanf("%d %d %lf",&a,&b,&c);

    res += b*c;
    printf("VALOR A PAGAR: R$ %.2lf\n", res);


    return 0;
}
