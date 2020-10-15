#include<stdio.h>
void main()
{
    double a,b,c,d,last,avg;

    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    avg=(a*2+b*3+c*4+d)/10;
    printf("Media: %.1lf\n",avg);

    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg>=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&last);
        printf("Nota do exame: %.1lf\n",last);

        if((last+avg)/2>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",(last+avg)/2);
        }
    else
        printf("Aluno reprovado.\n");

    return 0;

}
