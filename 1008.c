// Here I'm using %s for string or several char
// %c for one char
#include<stdio.h>

int main()

{
    char name;
    double salary,sales,s_bonus;
    scanf("%s %lf %lf",&name,&salary, &sales);
    s_bonus = salary + (sales * 0.15);
    printf("TOTAL = R$ %.2lf\n",s_bonus);
    return 0;
}
