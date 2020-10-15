#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if(a<(b+c)&&b<(a+c)&&c<(b+a))
    printf("Perimetro = %.1f\n",a+b+c);
    else
    printf("Area = %.1f\n",0.5*(a+b)*c);

    return 0;


}
