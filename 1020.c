#include<stdio.h>
int main()

{
    int n,year,month,day;
    scanf("%d",&n);

    year = (n / 365);
    month = ((n%365) / 30);
    day = (n % 365) % 30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);


    return 0;
}
