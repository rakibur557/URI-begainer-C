#include<stdio.h>
int main()
{
    int num,rem,temp,sum=0;

    printf("Enter digits: ");
    scanf("%d",&num);

    temp = num;
    while( temp%10 !=0)
    {
        rem= temp%10;
        sum= sum+rem;
        temp= temp/10;
    }
    printf("Sum of Digit: %d\n",sum);

    return 0;
}
